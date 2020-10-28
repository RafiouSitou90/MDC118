#include <stdio.h>
#include <stdlib.h>

const int SIZE_1 = 4;
const int SIZE_2 = 2;

int main(int argc, const char *argv[]) {

    float note[SIZE_1][SIZE_2];
    float average[SIZE_1];

    /**
     * PROPORTION
     *
     * 0 - x - RAND_MAX
     * 0 - y - 10
     * x/y = RAND_MAX - x / 10 - y ==> x * (10 - y) = y * (RAND_MAX - x)
     * ==> 10 * x - xy = RAND_MAX * y - x * y
     * ==> 10 * x = RAND_MAX * y => 10 * x / RAND_MAX = y
     */

    for (int i = 0; i < SIZE_1; i++) {
        for (int j = 0; j < SIZE_2; j++) {
            printf("%f", note[i][j] = (float) rand() * 10 / RAND_MAX);
        }
    }

    for (int i = 0; i < SIZE_1; i++) {
        float sum = 0;
        for (int j = 0; j < SIZE_2; j++) {
            sum = sum + note[i][j];
            printf("%5.1f", note[i][j]);
        }
        average[i] = sum / 2;
        printf("%5.1f", average[i]);
        printf("\n");
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
