#include <stdio.h>

int main(){
    printf("Desafio Xadrez");
    printf("Novo commit\n");
    
  char Codigo[10];
  char Nome[15];
  int Pontos = 30;
  float PIB = 1100000000; //1.1 bilhões
  int Populacao = 51000;
  float Area  = 942.7; //Area da cidade em km²

  float densidade = (float) Populacao / Area;
  float PIB_per_capita  = (float) PIB / Populacao; 



  printf("Digite o Codigo: \n");
  scanf("%d", Codigo);

  printf("Digite o Nome: \n");
  scanf("%s", Nome);

  printf("População: %d habitantes\n", Populacao);
  printf("densidade : %.2f\n", densidade);
  printf("PIB : %.2f\n", PIB_per_capita);
  printf("PIB per capita: R$ %.2f\n", PIB_per_capita);







return 0;

}