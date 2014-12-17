procedure controllo_righe_array2d (in: n, i, out: b)
var n: integer
var m: integer
var i: integer
var array: array(1..i,1..n) of real
var b: array(i..n) of real
main ()
b(n):=1
printf(array(i,n));
for (i=1 to m) do
for (n=1 to m) do
b(n):=b(n)*array(i,n)
end for
end for
if (b(n)>0) do
printf(b(n))
else
if (b(n)<0) do
printf("-1")
else
if (b(n)=0) do
printf("0")
end if
end if
end if
end 
end controllo_righe_array2d

