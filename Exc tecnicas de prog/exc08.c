/*8. Faça um programa que receba um número positivo e
maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int n1,quad,cub,razq,razc;

  printf("Digite um número inteiro, positivo e maior que zero: ");
    scanf("%d", &n1);
  quad = n1 * n1;
  cub = n1 * n1 * n1;
  razq = sqrt(n1);
  razc = cbrt(n1);

    printf("O número digitado ao quadrado é: %d\n", quad);
    printf("O número digitado ao cubo é: %d\n", cub);
    printf("A raiz quadrada do número digitado é: %d\n", razq);
    printf("A raiz cúbica do número digitado é: %d\n", razc);
}