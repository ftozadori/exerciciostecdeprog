/*1. Faça um programa que receba dois números e mostre o menor.
*/

#include <stdio.h>

int main(void){
  int n1, n2;

  printf("Informe dois números inteiros:");
  scanf("%d %d", &n1, &n2);

  if (n1 < n2)
    printf("O menor número é: %d", n1);
  else
    printf("O menor valor é: %d", n2);
}