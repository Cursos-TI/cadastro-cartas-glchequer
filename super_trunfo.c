#include <stdio.h>

int main(){

  int carta;
  char estado[3], codigo[4], cidade[20];
  int pop,  PT;//PT = Pontos Turísticos
  float area, PIB;

  printf("Insira o número da carta.");
  scanf("%d", &carta);

  printf("Insira o Estado da carta.");
  scanf("%s", &estado);

  printf("Insira o código da carta.");
  scanf("%s", &codigo);

  printf("Insira o nome da cidade");
  scanf("%s", &cidade);

  printf("Insira a população da cidade");
  scanf("%d", &pop);

  printf("Insira a area da cidade");
  scanf("%f", &area);

  printf("Insira o PIB da cidade");
  scanf("%f", &PIB);

  printf("Insira o numero de pontos turísticos da cidade");
  scanf("%d", &PT);
  

  printf("Carta %d \n", carta);

  printf("Estado %s\n", estado);

  printf("Código %s\n", codigo);

  printf("Cidade %s\n", cidade); 

  printf("População %d habitantes\n ", pop); 

  printf("Área %.2f Km²\n ", area); 

  printf("PIB %.2f milhões\n ", PIB); 

  printf("Pontos Turísticos %d\n", PT);

  return 0;
}
