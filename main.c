#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<locale.h>
#include "estrutura.h"
#include "modulo_usuario.h"


typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30];
} pessoa; pessoa p[1];

int main ()
{
    int opc = 0;
    int cont_pessoas=0;
    int cont_cadastro=0;

    char login[30]; // responsável por armazenar login e senha
    char senha[30];



    strcpy(p[0].login, "victor");
    strcpy(p[0].senha, "12345678");
    //strcpy(p[1].login, "Admin");
    //strcpy(p[1].senha, "Master");

    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    printf("\nAcesso ao portal\n");

    while(!login_efetuado){

    printf("\nDigite o seu login:");
    scanf("%s", login);

    printf("\nsenha:");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)|| (strcmp(login,p[1].login)==0) && (strcmp(senha,p[1].senha)==0)   ){ // A função strcmp é responsável por comparar string com string
        printf("Usuário logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da função main, usuário será logado.
        login_efetuado = 1;
    }else{
        printf("\nLogin e/ou senha incorretos!\n\nDigite novamente\n");
    }

        }


    system("cls");//limpa a tela

    while(opc != 3)
    {
        printf("                                                                   \n");
        printf("----------------Seja-Bem-vindo(a)----------------------------------\n");
        printf("                                                                   \n");
        printf("1 - Sistema de Usuarios\n2 - Sistema de Livros\n3 - Sair do Sistema\n");
        scanf("%d", &opc);

        switch(opc)
        {

        case 1:
            main_Usuarios(&cont_pessoas,&cont_cadastro);
            break;

        case 2:
            //main_Livros();
            break;

        case 3://Sair do Sistema

            break;

        default:
            printf("\nDigite uma uma opcao valida\n");
            printf("\n");
        }
    }
    return 0;
}
