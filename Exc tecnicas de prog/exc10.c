/*10. O custo ao consumidor de um carro novo é a soma do
preço de fábrica com o percentual de lucro do distribuidor e
dos impostos aplicados ao preço de fábrica.
Faça um programa que receba o preço de fábrica de um
veículo, o percentual de lucro do distribuidor e o percentual
de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.*/

#include <stdio.h>

int main(void) {
  float pf, luc, imp, custo, pi,pl;

  printf("Digite o preço de fábrica do veículo: ");
   scanf(" %f", &pf);
  printf("Digite o percentual de lucro do distribuidor: ");
   scanf(" %f", &pl);
  printf("Digite o percentual de impostos: ");
   scanf(" %f", &pi);

  luc = pf * (pl/100);
  imp = pf * (pi/100);
  custo = pf + luc + imp;

  printf("O valor correspondente ao lucro do distribuor é %.2f\n", luc);
  printf("O valor correspondente aos impostos é %.2f\n", imp);
  printf("Preço final do veículo é %.2f\n", custo);
}