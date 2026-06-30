X=[-2 0 2 5 7];
Y=[-8 -2 4 13 19];
sumx=0;
sumy=0;
sumxx=0;
sumxy=0;
for (i = 1:length(X))
    sumx=sumx+X(i);
    sumy=sumy+Y(i);
    sumxx=sumxx+X(i)*X(i);
    sumxy=sumxy+X(i)*Y(i);
end

A=[sumx length(X); sumxx sumx];
B=[sumy; sumxy];
C=inv(A)*B;
fprintf("The best fitting curve= y=%fx+(%f)\n", C(1), C(2));