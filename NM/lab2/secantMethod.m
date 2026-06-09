f = inline('cos(x)*cosh(x)+1');
x0 = input('Enter first guessing (x0): ');
x1 = input('Enter second guessing (x1): ');
e = input('Enter allowed error(e): ');
format long;
while(abs(x1-x0) > e)
    f0 = f(x0);
    f1 = f(x1);
    x2 = (f1*x0 - x1*f0) / (f1 - f0);
    x0 = x1;
    x1 = x2;
end
fprintf('The required root = %f\n', x2);







