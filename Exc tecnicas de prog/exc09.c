/*9. Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça
as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.*/

#include <stdio.h>


int main(void) {
  float pes, pol, jar, mi;

  printf("Digite a medida em pés: ");
  scanf("%f", &pes);

  pol = pes * 12;
  jar = pes / 3;
  mi = jar / 1.760;

  printf("A medida em polegadas é: %.2f\n", pol);
  printf("A medida em jardas é: %.2f\n", jar);
  printf("A medida em milhas é: %.2f\n", mi);
}