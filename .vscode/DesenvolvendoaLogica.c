#include <stdio.h>

int main(){
    printf("Desafio Xadrez");
    printf("Novo commit\n");
    
  char Codigo1[10], Codigo2[10];
  char Cidade1[15],Cidade2[15];
  int PontosT1 = 50;
  int PontosT2 = 30;
  float PIB1 = 1650000000; //1 .65 bilhões 
  float PIB2 = 1100000000;//1.1 bilhões
  int Populacao1 = 66000; 
  int Populacao2 = 51000;
  float Area1 = 942.7; //Area da cidade em km²
  float Area2 = 482.3; //Area da cidade em km²


  float densidade = (float) Populacao1 / Area1;
  float PIB_per_capita  = (float) PIB1 / Populacao1; 
  
  float densidade2 = (float) Populacao2 / Area2;
  float PIB_per_capita2  = (float) PIB2 / Populacao2;



  printf("Digite o Codigo: \n");
  scanf("%s", Codigo1);

  printf("Digite o Codigo: \n");
  scanf("%s", Codigo2);

  printf("Digite o Cidade1 : \n");
  scanf("%s", Cidade1);

    printf("Digite o Cidade2 : \n");
  scanf("%s", Cidade2);
  
  printf("População1: %d habitantes\n", Populacao1);
  printf("densidade1 : %.2f\n", densidade);
  printf("PIB per capita1: R$ %.2f\n", PIB_per_capita);
 
  printf("População2: %d habitantes\n", Populacao2);
  printf("densidade2 : %.2f\n", densidade2);
  printf("PIB2 : %.2f\n", PIB_per_capita);
  printf("PIB per capita2: R$ %.2f\n", PIB_per_capita);
 


  if (Populacao1 > Populacao2){
    printf("Cataguases Mais habitantes que leopoldina.\n");
  } else{
    printf("Cataguases Menos habitantes que Leopoldina.\n");
  }
 
  if (Area1 > Area2){
    printf("Cataguases Maior que Leopoldina");
  } else {
    printf("Cataguases Menor que Leopoldina");
  }





return 0;

}