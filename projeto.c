#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int numero;
int solicitar;
int excluir;

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
    printf("-> 3 (Incluir) Objeto no Banco de Dados da Loja\n");
    printf("-> 4 (Excluir) Objeto no Banco de Dados da Loja\n");
    printf("\nDigite o Número da sua Escolha: ");
    scanf("%d", &numero);  // ARMAZENAR NUMERO DA "ESCOLHA" DO USUARIO
    system("cls");

    char incluir[50];
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
            printf("\n");
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
         
            fprintf(pont_arq, "%d", solicitar);

            printf("\n");
            system("pause");
            break;
        case 2:
          printf("Gerarando Lista de Compras\n");
          printf("\n");
            SetConsoleTitle("Desejar Abrir notepad ?\n"); 
            system("start arquvi_palavra.txt"); // ABRINDO O ARQUIVO TEXTO NA MAQUINA
          break;
        case 3:
          printf("Incluir Objeto no Banco de Dados\n");
          printf("\n");
          printf("Escreva qual Ferramenta que Deseja Incluir no Banco de Dados: ");
          scanf("%s", &incluir);
          pont_arq = fopen("arquvi_palavra.txt", "at");
          fprintf(pont_arq, "%s", incluir); // ARMARZENAR A ESCRTIA DO USUARIO NO .TXT
          fclose(pont_arq);
          printf("\n");
          printf("O Objeto foi criado e Listado com sucesso!\n");
          printf("\n");
          system("pause");
          break;
        case 4:
          printf("Excluir Objeto no Banco de Dados\n");
          printf("\n");
          printf("1 - SIM\n");
          printf("2 - NAO\n");
          printf("\n");
          printf("Deseja Excluir Toda a Lista do Banco de Dados: ");
          printf("\n");

          scanf("%d", &excluir);

          if (excluir == 1)
          {
              pont_arq = fopen("arquvi_palavra.txt", "a");
              fputs("NULL", pont_arq);
              fclose(pont_arq);
              printf("\n");
              printf("Dados Apagado com Sucesso");
              printf("\n");
          }

          if (excluir == 2)
          {
            printf("Nenhum Dado Apagado\n");

          }

          if (excluir >2)
          {
            printf("Essa Opcao nao Existe");

          }


          break;

        default:  // NENHUMA DAS OPÇÃO DE CIMAS
          printf("Opção Invalida\n");
    }

  return 0;
}