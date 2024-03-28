program Calculator;

uses
  crt;

function add(a, b: integer): integer;
begin
  add := a + b;
end;

function subtract(a, b: integer): integer;
begin
  subtract := a - b;
end;

function multiply(a, b: integer): integer;
begin
  multiply := a * b;
end;

function divide(a, b: integer): real;
begin
  if b <> 0 then
    divide := a / b
  else
    divide := 0; // Handle division by zero case
end;

function modulusCalc10(a, b: integer): integer;
begin
  modulusCalc10 := (a mod b) + 10;
end;

function compare(a, b: integer): integer;
begin
  if a > b then
    compare := a
  else if b > a then
    compare := b
  else
    compare := 0; // Numbers are equal
end;

var
  a, b, c: integer;

begin
  clrscr;
  writeln('Enter two numbers:');
  readln(a, b);
  c := subtract(a, b);
  writeln('Addition of ', a, ' and ', b, ' is ', add(a, b));
  writeln('Subtraction of ', a, ' and ', b, ' is ', c);
  writeln('Multiplication of ', a, ' and ', b, ' is ', multiply(a, b));
  writeln('Division of ', a, ' and ', b, ' is ', divide(a, b));
  writeln('Modulus of ', a, ' and ', b, ' is ', modulusCalc10(a, b));
  writeln('Comparison of ', a, ' and ', b, ' ', compare(a, b), ' is the greatest');
  if compare(a, b) = 0 then
    writeln('The numbers are equal');
end.