program matrea;
uses crt;
var a, b, c: array[1..2,1..2] of integer; i, j: integer;
begin
writeln('matriks 1');
for i := 1 to 2 do
    begin
        writeln('baris',i,'');
        for j:= 1 to 2 do 
        begin
            writeln('kolom',j);
            read(a[i,j]);
        end;
    end;

writeln('matriks2');
for i := 1 to 2 do
    begin
        writeln('baris',i,'');
        for j := 1 to 2 do 
        begin
            writeln('kolom', j);
            readln(b[i,j]);
        end;
    end;
for i := 1 to 2 do
    begin
        for j:= 1 to 2 do
        begin
            c[i,j]:= a[i,j]+b[i,j];
        end;
    end;

clrscr;
writeln('matriks hasil');
for i := 1 to 2 do
    begin
        writeln('baris',i,'');
for j := 1 to 2 do
    begin
        writeln('kolom',j);
        writeln(c[i,j]);
    end;
    end;
end.