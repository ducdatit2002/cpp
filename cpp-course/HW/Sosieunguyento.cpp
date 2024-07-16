Program sieu_nguyen_to;
Var     f,g: text;
        i,k,m,min,max: longint;
        a: array[1..1000] of longint;
Function nt(p:longint):boolean;
var     i:longint; Begin
            nt:=true; for i:= 2 to trunc(sqrt(p)) do if (p mod i = 0) then begin 
                nt := false; exit; end; if p<2 then nt:= false; End;
Function luythua(a,n:longint):longint; var i: longint; begin
            luythua := a; for i   := 2 to n do luythua:=luythua*a; end;
BEGIN
     assign(f,'sieunt.inp'); reset(f);
     assign(g,'sieunt.out'); rewrite(g); read(f,m);
     min := luythua(10,m-1);
     max := luythua(10,m); for i := min to max do begin 
            k := i; while nt(k) do k:=k div 10; if k = 0 then write(g,i,#32); end;
     close(f); close(g);
     assign(f,'sieunt.out'); reset(f);
     i := 1; while not eof(f) do begin read(f,a[i]);
            inc(i); end;
     close(f);
     assign(g,'sieunt.out'); rewrite(g);
     writeln(g,i-2); for k := 1 to i-2 do write(g,a[k],#32);
     close(g); 
END.
