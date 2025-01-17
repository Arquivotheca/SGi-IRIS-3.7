(*****************************************************************************)
(*                                                                           *)
(*                            File: FLIBFRD.TEXT                             *)
(*                                                                           *)
(*           (C) Copyright 1982, 1985 Silicon Valley Software, Inc.          *)
(*                                                                           *)
(*                            All Rights Reserved.               10-May-85   *)
(*                                                                           *)
(*****************************************************************************)


{$%+} {$R-} {$I-}

unit %flibfrd;

interface

uses {$u flibinit} %flibinit,
     {$u flibrec}  %flibrec,
     {$u flibfmt}  %flibfmt,
     {$u flibfr}   %flibfr;

implementation

function %_dpwr10(n: integer): double; external;


{ Read a double, formatted }

procedure %_rdfr8(var freal: real8);
  var lch: char; lreal: real8; NegFlag, ExpFound: Boolean; 
      scale: integer; exp: integer;
begin {%_rdfr8}
%getfmt;
if AorZFlag then begin %%rdfch(@freal,8); exit(%_rdfr8); end;
if (edlet < 'D') or (edlet > 'G') then %error(34);
lreal := 0; col := 0; ExpFound := FALSE;
scale := - 32767; { Used to count places after decimal point }
repeat
  %getch(lch);
until (lch <> ' ') or (col = edw);
NegFlag := lch = '-';
if (lch = '-') or (lch = '+')
then
  if col = edw then lch := ' ' else %getch(lch);
while (col <= edw) and (not ExpFound) do begin
  if lch = ' ' 
  then begin
    if BZFlag 
    then begin lreal := lreal*10; scale := scale + 1; end
    end
  else
    if lch = '.' 
    then begin if scale >= 0 then %error(35); scale := 0; end
    else 
      if (lch = 'E') or (lch = 'D') or (lch = 'e') or (lch = 'd')
      then begin 
        exp := %rdintconst(edw - col,TRUE); ExpFound := TRUE;
        end
      else 
        if (lch = '+') or (lch = '-')
        then begin
          exp := %rdintconst(edw - col,FALSE);
          if lch = '-' then exp := -exp; ExpFound := TRUE;
          end
        else begin
          if (lch < '0') or (lch > '9') then %error(36);
          lreal := lreal*10 + (ord(lch) - ord('0'));
          scale := scale + 1;
          end;
  if (col < edw) and (not ExpFound) then %getch(lch) else col := col + 1;
  end;
if NegFlag then lreal := -lreal;
if scale >= 0 
then lreal := lreal/%_dpwr10(scale)
else lreal := lreal/%_dpwr10(edd);
if not ExpFound then exp := -pval;
if exp < 0
then lreal := lreal/%_dpwr10(-exp)
else lreal := lreal*%_dpwr10(exp);
freal := lreal;
end; {%_rdfr8}


{ Read a double array, formatted }

procedure %_rafr8(var frealarray: real8array; count: int4);
  var ctr: longint;
begin {%_rafr8}
for ctr := 1 to count do
  %_rdfr8(frealarray[ctr]);
end; {%_rafr8}

end. {%flibfrd}

                                                                                                                                                                                                                  