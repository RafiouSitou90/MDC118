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

typedef struct CONTACT CONTACT;

struct CONTACT {
    char name[31];
    char phone[11];
};

const int NB_CONTACT = 10;

int main(int argc, const char *argv[]) {

    CONTACT tab_contact[NB_CONTACT];

    memset(tab_contact, 0, sizeof(tab_contact));

    for (int i = 0; i < NB_CONTACT; i++) {
        printf("\n********************** Contact number %d **********************\n", i + 1);
        printf("Enter the name         :");
        gets(tab_contact[i].name);

        while (30 < strlen(tab_contact[i].name)) {
            printf("Max characters allowed for the name is 30, try again\n");
            printf("Enter the name         :");
            gets(tab_contact[i].name);
        }

        printf("Enter the phone number (Ex: 99999-9999) :");
        gets(tab_contact[i].phone);
        while (10 != strlen(tab_contact[i].phone)) {
            printf("Max characters allowed for the phone is 10 (Ex: 99999-9999), try again\n");
            printf("Enter the phone number :");
            gets(tab_contact[i].phone);
        }
    }

    printf("\n\n========================= Contact List    =========================\n");
    for (int i = 0; i < NB_CONTACT; i++) {
        printf("\n********************** Contact number %d **********************\n", i + 1);
        printf("Name  : %s\n", tab_contact[i].name);
        printf("Phone : %s", tab_contact[i].phone);
    }
    printf("\n********************** End of the list **********************");

    printf("\n\n");
    system("PAUSE");

    return 0;
}
