%finding root of a equation by fixed point iteration method

g = inline("(exp(x)-sin(x))/3");
x0 = input("Enter x0: ");
for(i = 1:100)
    x1 = g(x0);
    x0=x1;
end
fprintf('The required root = %f\n', x1);

