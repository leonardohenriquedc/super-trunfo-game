#include <stdio.h>

int main() {
  char state, code_card[3], city[20];
  int population, amount_point_turist;
  float area, pib;

  printf("Digite o nome da cidade: ");
  fgets(city, sizeof(city), stdin);

  printf("Digite um codigo para a carta (Deve conter pelo menos uma letra e um "
         "numero): ");
  scanf("%s", code_card);

  printf("Digite uma letra representado o estado da cidade em questão, de A a "
         "H: ");
  scanf(" %c", &state);

  printf("Digite a quantidade pontos turisticos na cidade em questão: ");
  scanf("%d", &amount_point_turist);

  printf("Digite a area em metros quadrados (digite apenas o numero: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade em questão: ");
  scanf("%f", &pib);

  printf("As informações da carta são: \nEstado: %c\nCódigo: %s\nNome da "
         "Cidade: %s"
         "Área: %f km²\nPIB: %f\nNúmero de pontos turísticos: %d \n",
         state, code_card, city, area, pib, amount_point_turist);
}
