#include <stdio.h>

#define MAX 100

int main(void) {
    float x[MAX];
    float y[MAX];
    float z[MAX];
    float varX = 0, varY = 0, varZ = 0;

    for (int i = 0; i < MAX; i++) {
        x[i] = varX;
        y[i] = varY;
        z[i] = varZ;
        varX = 1 - 0.125*varY + 0.125  *varZ;
        varY = 0.571   + 0.143 *varX + 0.286  *varZ;
        varZ = 1.333 - 0.222*varX - 0.111*varY;
        if (x[i] == varX && y[i] == varY && z[i] == varZ) {
            printf("    x          y          z     \n");
            printf("---------- ---------- ----------\n");
            for (int j = 0; j <= i; j++) {
                printf("%10.6f %10.6f %10.6f\n", x[j], y[j], z[j]);
            }
            return 0;
        }
    }

    printf("No solution found\n");
    return 0;
}
