/**
 * Created by Rafiou Sitou
 */



/**
 * Escrever um programa em C que calcule o perímetro
 * de uma circunferência (p = 2 x pi x raio, considerendo pi = 3.1416).
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {
    const double PI = 3.1416;
    int ray;
    double perimeter;

    printf("Enter the ray :");
    scanf("%d", &ray);
    getchar();

    perimeter = 2 * PI * ray;

    printf("The perimeter of the circle is : %f\n\n", perimeter);

    system("PAUSE");
    return 0;
}
