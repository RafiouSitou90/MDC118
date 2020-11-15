/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia o nome (30 caracteres) e o telefone de 10 contatos (inteiro longo),
 * e depois imprima todos os contatos no formato "nome - telefone".
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PERSON PERSON;
struct PERSON {
    char name[30];
    char phone[14];
};

const int NB_PERSON = 2;

int main(int argc, const char *argv[]) {

    PERSON tab_person[NB_PERSON];

    for (int i = 0; i < NB_PERSON; i++) {
        printf("\n********************** Person number %d **********************\n", i + 1);
        printf("Enter the name         :");
        gets(tab_person[i].name);

        while (30 < strlen(tab_person[i].name)) {
            printf("Max characters allowed for the name is 30, try again\n");
            printf("Enter the name         :");
            gets(tab_person[i].name);
        }

        printf("Enter the phone number :");
        gets(tab_person[i].phone);
        while (14 < strlen(tab_person[i].phone)) {
            printf("Max characters allowed for the phone is 14, try again\n");
            printf("Enter the phone number :");
            gets(tab_person[i].phone);
        }
    }
    printf("\n");

    printf("\n********************** Contact List    **********************\n");
    for (int i = 0; i < NB_PERSON; i++) {
        printf("\n********************** Person number %d **********************\n", i + 1);
        printf("Name  : %s\n", tab_person[i].name);
        printf("Phone : %s", tab_person[i].phone);
    }
    printf("\n********************** End of the list **********************");

    printf("\n\n");
    system("PAUSE");

    return 0;
}
