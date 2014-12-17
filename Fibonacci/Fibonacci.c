function fibonacci (n)
var n: integer
var a:integer
var fibonacci: logical
Begin ()
fibonacci
read n
a:=n
if (n>1) do
n:=n-1+n-2
end if
if (n=a) do
fibonacci=true
end if
print fibonacci
end
end fibonacci(n)
