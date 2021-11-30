#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;
int solicitar;
char buf[20];

int main(int argc, char *argv[])
{
system("cls");  // LIMPAR TELA (RESTO DE MEMORIA )
setlocale(LC_ALL,"Portuguese");   // DEFININDO IDIOMA PARA O "Portugues"
system("color 1F");
FILE *pont_arq; // CRIA VARIÁVEL PONTEIRO PARA O ARQUIVO
pont_arq = fopen("arquvi_palavra.txt", "w");
  if(pont_arq == NULL)
  {
    printf("ERRO NA ABERTURA DO ARQUIVO");
    exit;
  }

    char nome[30];  // DEFINIR CARACTERES LIMITES PARA SER DIGITADO PELO USUARIO 
    printf("Digite seu Nome: ");
    gets(nome);     // ARMAZENAR NOME QUE USUARIO DIGITOU
    printf("\n");
    system("pause");
    system("cls");
    printf("Ola, Seja Bem Vindo %s ao Programa da Loja de Ferramentas \n",nome);
     printf("\n");	    // PULAR LINHA
    system("pause");
     system("cls");     // LIMPAR DADOS DAS LINHAS PASSADAS 

    printf("O que Deseja Fazer no Aplicativo\n");
    printf("\n-> 1 (Solicitar) Peca\n");
    printf("-> 2 (Gerar) Lista das Compras\n");
    printf("-> 3 (Alterar) Objeto no Banco de Dados da Loja\n");
    printf("-> 4 (Excluir) Objeto no Banco de Dados da Loja\n");
    printf("\nDigite o Número da sua Escolha: ");
    scanf("%d", &numero);  // ARMAZENAR NUMERO DA "ESCOLHA" DO USUARIO
    system("cls");

    switch(numero)  //ESTRUTURA DE DECISÃO 
    {
        case 1: 
            printf("Solicitando Peca\n");
            printf("-------------------------------\n");
            printf("1 -> PREGOS\n");
            printf("2 -> CIMENTO\n");
            printf("3 -> TINTA\n");
            printf("4 -> TIJOLO\n");
            printf("5 -> BARRA DE FERRO\n");
            printf("-------------------------------\n");
            printf("Qual Peca deseja SOLICITAR: ");
            scanf("%d", &solicitar);

            if (solicitar == 1)
            {
              printf("Voce Solicitou Prego");
            }

            if (solicitar == 2)
            {
            printf("Voce Solicitou Cimento");
            }

              if (solicitar == 3)
            {
            printf("Voce Solicitou Tinta");
            }

              if (solicitar == 4)
            {
            printf("Voce Solicitou Tijolo");
            }

              if (solicitar == 5)
            {
            printf("Voce Solicitou Barra de Ferro");
            }

            if (solicitar >5)
            {
              printf("Essa Opcao nao Existe");
            }

            

            printf("\n");
            system("pause");
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