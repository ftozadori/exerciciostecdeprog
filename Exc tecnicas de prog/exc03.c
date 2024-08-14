/*3. Faça um programa que receba três notas e seus respectivos pesos,
  calcule e mostre a média ponderada.
  ALGORITMO
   DECLARE nota1, nota2, nota3, peso1, peso2,
  peso3, media NUMÉRICO
   LEIA nota1, nota2, nota3, peso1, peso2, peso3
   media ← (nota 1 * peso 1 + nota 2 * peso 2 +
  nota 3 * peso3)/(peso 1 + peso 2 + peso 3)
   ESCREVA media
  FIM_ALGORITMO.*/

#include <stdio.h>

int main(void) {
  float n1, n2, n3, media;
  int p1, p2, p3, sompesos;

  printf("Digite a primeira nota: ");
  scanf("%f" , &n1);
  printf("Digite o peso da primeira nota: ");
  scanf("%d" , &p1);
  printf("Digite a segunda nota: ");
  scanf("%f" , &n2);
  printf("Digite o peso da segunda nota: ");
  scanf("%d" , &p2);
  printf("Digite a terceira nota: ");
  scanf("%f" , &n3);
  printf("Digite o peso da segunda nota: ");
  scanf("%d" , &p3);

  sompesos = p1 + p2 + p3;
  media = (n1 * p1) + (n2 * p2) + (n3 * p3) / sompesos;

    printf("A média ponderada é: %.2f" , media);
  return 0;
}

