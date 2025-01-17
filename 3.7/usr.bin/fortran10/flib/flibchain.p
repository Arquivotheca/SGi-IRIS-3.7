(*****************************************************************************)
(*                                                                           *)
(*                           File: FLIBCHAIN.TEXT                            *)
(*                                                                           *)
(*           (C) Copyright 1982, 1985 Silicon Valley Software, Inc.          *)
(*                                                                           *)
(*                            All Rights Reserved.               10-May-85   *)
(*                                                                           *)
(*****************************************************************************)


{$%+} {$R-} {$I-} {--->$E- This option must match the users value!!!}

unit %flibchain;

interface

uses {$u flibinit} %flibinit;

procedure fchain(name: ppac; len: integer; var driveno: longint);

implementation

procedure fchain{*name: ppac; len: longint; var driveno: longint*};
  var s: string[80];
      a: array[0..80] of byte;
      largv: array[1..1] of ^str64;
begin
if len > 80 then len := 80;
moveleft(name^,a[1],len);
a[0] := 0;
while a[len] = ord(' ') do len := len - 1;
a[0] := len;
moveleft(a,s,81);
largv[1] := nil;
if chain(s,input,output,largv,0) <> 0 then %_ferror(0,708);
end; {fchain}

end. {%flibchain}

                                                                                                                                                                                            