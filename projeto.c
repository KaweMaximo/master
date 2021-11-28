#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;

int main(int argc, char *argv[])
{
system("cls");  // LIMPAR TELA (RESTO DE MEMORIA )
setlocale(LC_ALL,"Portuguese");   // DEFININDO IDIOMA PARA O "Portugues"
system("color 1F");

    char nome[30];  // DEFINIR CARACTERES LIMITES PARA SER DIGITADO PELO USUARIO 
    printf("Digite seu Nome: ");
    gets(nome);     // ARMAZENAR NOME QUE USUARIO DIGITOU
    system("pause");
    system("cls");
    printf("Olá, Seja Bem Vindo %s ao Programa da Loja de Ferramentas \n",nome);
     printf("\n");	    // PULAR LINHA
    system("pause");
     system("cls");     // LIMPAR DADOS DAS LINHAS PASSADAS 

    printf("O que Deseja Fazer no Aplicativo\n");
    printf("\n-> 1 (Solicitar) Peça\n");
    printf("-> 2 (Gerar) Lista das Compras\n");
    printf("-> 3 (Alterar) Objeto no Banco de Dados da Loja\n");
    printf("-> 4 (Excluir) Objeto no Banco de Dados da Loja\n");
    printf("\nDigite o Número da sua Escolha: ");
    scanf("%d", &numero);  // ARMAZENAR NUMERO DA "ESCOLHA" DO USUARIO
    system("cls");

    switch(numero)  //ESTRUTURA DE DECISÃO 
    {
        case 1: 
            printf("Solicitando Peça\n");
            printf("1 PREGOS");
            break;
        case 2:
          printf("Gerarando Lista de Compras\n");
          break;
        case 3:
          printf("Alterar Objeto no Banco de Dados\n");
          break;
        case 4:
          printf("Excluir Objeto no Banco de Dados\n");
          break;

        default:  // NENHUMA DAS OPÇÃO DE CIMAS
          printf("Opção Invalida\n");
    }

  return 0;
}