/*13. Cada degrau de uma escada tem X de altura. Faça
um programa que receba essa altura e a altura que o
usuário deseja alcançar subindo a escada, calcule e
mostre quantos degraus ele deverá subir para atingir
seu objetivo, sem se preocupar com a altura do
usuário. Todas as medidas fornecidas devem estar em
metros.*/

#include <stdio.h>

int main(void) {
  float alturadegrau, alturaobjetivo, degraus;

  printf("Digite a altura que deseja subir em metros: ");
   scanf("%f", &alturaobjetivo);
  printf("Digite a altura de cada degrau em metros: ");
   scanf("%f", &alturadegrau);

  degraus = alturaobjetivo / alturadegrau;

  printf("Você deverá subir %.0f degraus para atingir seu objetivo.", degraus);
}