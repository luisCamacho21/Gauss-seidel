#include <stdio.h>
#include <math.h>

main () {


float x[20];
float y[20];
float z[20];
float varX, varY, varZ;
varX = varY = varZ = 0;

x[0] = 0;
y[0] = 0;
z[0] = 0;
int i=0;

do {

varX = 1 - 0.125*(y[i]) + 0.125*(z[i]);
float rounded_downX = floorf(varX * 10000) / 10000;
x[i+1] = rounded_downX;
varY = (0.571) + (0.143*(x[i+1])) + (0.286*(z[i]));
float rounded_downY = floorf(varY * 10000) / 10000;
y[i+1] = rounded_downY;
varZ = 1.333 - 0.222*(y[i+1]) - 0.111*(x[i+1]);
float rounded_downZ = floorf(varZ * 10000) / 10000;
z[i+1] = rounded_downZ;

i = i+1;



} while ((x[i] != x[i-1] ) && (y[i] != y[i-1] ) && (z[i] != z[i-1] ));

    printf("x\t");
for (int counter = 0; counter < 20; counter++) {
    printf("%f\t", x[counter]);
}
    printf("\n\ny\t");

for (int counter = 0; counter < 20; counter++) {
    printf("%f\t", y[counter]);
}
    printf("\n\nz\t");
for (int counter = 0; counter < 20; counter++) {
    printf("%f\t", z[counter]);
}



return 0;
}
