#include <stdio.h>

int main(){
    printf("Desafio Xadrez");
    printf("Novo commit/n");
    
  char Codigo[10];
  char Nome[15];
  int Pontos = 50;
  float PIB = 1650000000;
  int Populacao = 65000;
  float Area = 482.3;

  float densidade = (float) Populacao / Area;
  float PIB_per_capita  = (float) PIB / Populacao; 



  printf("Digite o Codigo: \n");
  scanf("%d", &Codigo);

  printf("Digite o Nome: \n");
  scanf("%s", &Nome);

  printf("densidade : %.2f\n", densidade);
  printf("PIB : %.2f\n", PIB_per_capita);
  
















return 0;



   }