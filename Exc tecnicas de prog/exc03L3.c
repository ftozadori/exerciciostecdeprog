/*3. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/

#include <stdio.h>

int main(void){
  int n1;

  printf("Informe um número inteiro: ");
  scanf("%d", &n1);

  if (n1 % 2 == 0)
    printf("O número %d é par.", n1);
  else
    printf("O número %d é ímpar.", n1);
  }
  
    
    