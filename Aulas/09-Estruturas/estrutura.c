#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco_t {
    char logradouro[30];
    unsigned short int numero;
    unsigned int cep;
    char bairro[15];
};

struct contato_t {
    char nome[30];
    unsigned int telefone;
    struct endereco_t endereco;
};

/*
    struct {
        char nome[30];
        unsigned int telefone;
        struct endereco_t endereco;
    } contato_1, contato_2;
*/

/*
    struct contato_t {
        char nome[30];
        unsigned int telefone;
        struct endereco_t endereco;
    } contato_1, contato_2;
*/

int main(int argc, const char *argv[]) {

/*
    struct endereco_t meu_endereco;

    printf("Entre com logradouro:");
    gets(meu_endereco.logradouro);
    printf("Entre com numero:");
    scanf("%hd", &meu_endereco.numero);
    printf("Entre com cep:");
    scanf("%u", &meu_endereco.cep);
    getchar();
    printf("Entre com bairro:");
    gets(meu_endereco.bairro);

    printf("\nMeu endereco\n");

    printf("%s %d - CEP %u - %s\n\n",
        meu_endereco.logradouro,
        meu_endereco.numero,
        meu_endereco.cep, meu_endereco.bairro
    );
*/

    struct contato_t meu_contato;
    struct contato_t lista_contato[10];

    printf("Entre com nome:");
    gets(meu_contato.nome);
    printf("Entre com telefone:");
    scanf("%u", &meu_contato.telefone);
    getchar();
    printf("Entre com logradouro:");
    gets(meu_contato.endereco.logradouro);
    printf("Entre com numero:");
    scanf("%hd", &meu_contato.endereco.numero);
    printf("Entre com cep:");
    scanf("%u", &meu_contato.endereco.cep);
    getchar();
    printf("Entre com bairro:");
    gets(meu_contato.endereco.bairro);

    printf("\nMeu contato\n");

    printf("%s\nTelephone %u\n%s %d - CEP %u - %s\n\n",
           meu_contato.nome,
           meu_contato.telefone,
           meu_contato.endereco.logradouro,
           meu_contato.endereco.numero,
           meu_contato.endereco.cep,
           meu_contato.endereco.bairro
    );

    printf("\n\n");
    system("PAUSE");

    return 0;
}
