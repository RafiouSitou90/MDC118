/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que localize um funcionário em uma matriz multidimensional
 * a partir da sua matricula e imprima o respectivo telefone.
 * Considere a matriz igual a
 * {
 *      {1111, 30001000},
 *      {2222, 30002000},
 *      {3333, 30003000},
 *      {4444, 30004000},
 *      {5555, 30005000},
 *      {6666, 30006000},
 *      {7777, 30007000}
 * }.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, const char *argv[]) {

    int employee[2][7] = {
        {1111, 2222, 3333, 4444, 5555, 6666, 7777},
        {30001000, 30002000, 30003000, 30004000, 30005000, 30006000, 30007000}
    };

    int registration_number;

    printf("Enter the employee registration number (ex: 1234) :");
    scanf("%d", &registration_number);

    bool found = false;
    int employee_index = 0, i = 0;

    while (!found && i < 7) {
        if (registration_number == employee[0][i]) {
            found = true;
            employee_index = i;
        } else {
            i++;
        }
    }

    if (found) {
        printf("\nEmployee found\n");
        printf("Registration number : %d\n", employee[0][employee_index]);
        printf("Phone number        : %d", employee[1][employee_index]);
    } else {
        printf("\nSorry, employee not found!!!");
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
