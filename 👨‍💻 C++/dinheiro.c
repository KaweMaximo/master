#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numero;
int main(int argc, char *argv[]) 
{
 int D;
 system("color 0F ");
 printf("------------------------\n");
 printf("    CRIANCA ESPERANCA    \n");
 printf("------------------------\n");
 printf("  OBRIGADO POR AJUDAR   \n");
 printf("Digite [1] para doar R$20\n");
 printf("Digite [2] para doar R$25\n");
 printf("Digite [3] para doar R$40\n");
 printf("Digite [4] para doar outros valores\n");
 printf("Digite [5] para sair\n");
 scanf("%d", &D);
 switch (D)
 {
  case 1:
   printf("Voce Doou R$20 Reais Obrigado!\n");
   break;
  case 2:
   printf("Voce Doou R$25 Reais Obrigado!\n");
   break;
  case 3:
   printf("Voce Doou R$40 Reais Obrigado!\n");
   break;
  case 4:
   printf("Digite o valor que deseja ajudar: ");
   scanf("%d", &D);
   printf("Voce Doou R$ %d \n", D);
   break;
  case 5:
  printf("voce doou R$0 Obrigado\n");
  break;   
 }
 system("pause\n");
 return 0;
}
