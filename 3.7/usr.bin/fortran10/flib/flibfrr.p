(*****************************************************************************)
(*                                                                           *)
(*                            File: FLIBFRR.TEXT                             *)
(*                                                                           *)
(*           (C) Copyright 1982, 1985 Silicon Valley Software, Inc.          *)
(*                                                                           *)
(*                            All Rights Reserved.               10-May-85   *)
(*                                                                           *)
(*****************************************************************************)


{$%+} {$R-} {$I-}

unit %flibfrr;

interface

uses {$u flibinit} %flibinit,
     {$u flibrec}  %flibrec,
     {$u flibfmt}  %flibfmt,
     {$u flibfr}   %flibfr;

implementation


{ Read a real, formatted }

procedure %_rdfr4(var freal: real4);
  var lch: char; lreal: real4; NegFlag, ExpFound: Boolean; 
      scale: integer; exp: integer;
begin {%_rdfr4}
%getfmt;
if AorZFlag then begin %%rdfch(@freal,4); exit(%_rdfr4); end;
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
    then begin lreal := 10 * lreal; scale := scale + 1; end
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
          lreal := 10 * lreal + (ord(lch) - ord('0')); 
          scale := scale + 1;
          end;
  if (col < edw) and (not ExpFound) then %getch(lch) else col := col + 1;
  end;
if NegFlag then lreal := - lreal;
if scale >= 0 
then lreal := lreal / pwroften(scale)
else lreal := lreal / pwroften(edd);
if not ExpFound then exp := -pval;
if exp < 0
then lreal := lreal / pwroften(-exp)
else lreal := lreal * pwroften(exp);
freal := lreal;
end; {%_rdfr4}


{ Read a complex, formatted }

procedure %_rdfc8(var fcomplex: complex);
begin {%_rdfc8}
%_rdfr4(fcomplex.realpart); %_rdfr4(fcomplex.imagpart);
end; {%_rdfc8}


{ Read a real array, formatted }

procedure %_rafr4(var frealarray: real4array; count: int4);
  var ctr: longint;
begin {%_rafr4}
for ctr := 1 to count do
  %_rdfr4(frealarray[ctr]);
end; {%_rafr4}


{ Read a complex array, formatted }

procedure %_rafc8(var fcomplexarray: complexarray; count: int4);
  var ctr: longint;
begin {%_rafc8}
for ctr := 1 to count do
  %_rdfc8(fcomplexarray[ctr]);
end; {%_rafc8}

end. {%flibfrr}

                                                                                                                                                                                                                                                                                                                                                                                                     