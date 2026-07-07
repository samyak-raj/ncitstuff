X = [0 2 5 7];
Y = [6 0 6 20];
sumx=0;
sumxx=0;
sumxxx=0;
sumxxxx=0;
sumy=0;
sumxy=0;
sumxxy=0;
for i = 1 : length(X)
    sumx = sumx + X(i);
    sumxx = sumxx + X(i)* X(i);
    sumxxx = sumxxx + X(i) * X(i) * X(i);
    sumxxxx = sumxxxx + X(i) * X(i) * X(i) * X(i);
    sumy = sumy + Y(i);
    sumxy = sumxy + X(i) * Y(i);
    sumxxy = sumxxy + X(i) * X(i) * Y(i);
end

A = [sumxx sumx length(X); sumxxx sumxx sumx; sumxxxx sumxxx sumxx];
B = [sumy; sumxy; sumxxy];

C = inv(A) * B;

fprintf("The best fitting curve:\n y = %.2fx^2 + (%.2f)x + (%.2f)\n", C(1), C(2), C(3));

