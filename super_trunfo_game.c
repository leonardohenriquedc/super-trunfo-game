#include <stdio.h>

void carta(void) {
  char state, code_card[3], city[20];
  int population, amount_point_turist;
  float area, pib;

  scanf("%c", NULL);
  printf("Digite o nome da cidade: ");
  fgets(city, sizeof(city), stdin);
  scanf("%c", NULL);
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

  printf("As informações da carta são:\n"
         "Estado: %c\n"
         "Código: %s\n"
         "Nome da Cidade: %s\n"
         "Área: %f km²\n"
         "PIB: %f\n"
         "Número de pontos turísticos: %d\n",
         state, code_card, city, area, pib, amount_point_turist);
}

int main() {

  printf("CARTA 1: \n");
  carta();

  printf("CARTA 2: \n");
  carta();
}
