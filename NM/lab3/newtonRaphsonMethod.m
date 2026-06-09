%finding root of a equation by newton raphson method
f = inline("x*log10(x)-2.7");
g = inline("log10(exp(1)) + log10(x)");
x0 = input("Enter x0: ");
for(i = 1:100)
    f0 = f(x0);
    g0 = g(x0);
    x1 = x0 - f0/g0;
    x0=x1;
end
fprintf('The required root = %f\n', x1);
    
