/*2. Faça um programa que receba três notas, calcule e
  mostre a média aritmética.
  ALGORITMO
   DECLARE nota1, nota2, nota3, media NUMÉRICO
   LEIA nota1, nota2, nota3
   media ← (nota1 + nota2 + nota3)/3
   ESCREVA media
  FIM_ALGORITMO.*/

#include <stdio.h>

int main(void){
  float n1, n2, n3, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  media = (n1 + n2 + n3)/3;

  printf("A média aritmética é: %.2f", media);
  return 0;
}