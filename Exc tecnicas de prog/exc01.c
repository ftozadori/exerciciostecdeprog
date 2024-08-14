/*1. Faça um programa que receba quatro números inteiros,
calcule e mostre a soma desses números.
ALGORITMO
 DECLARE n1, n2, n3, n4, soma NUMÉRICO
 LEIA n1, n2, n3, n4
 soma ← n1 + n2 + n3 + n4
 ESCREVA soma
FIM_ALGORITMO.*/

#include <stdio.h>

int main(void){
  int n1, n2, n3, n4, soma;
  printf("Digite o primeiro número: ");  
  scanf("%d", &n1);
  printf("Digite o segundo número: ");
  scanf("%d", &n2);
  printf("Digite o terceiro número: ");
  scanf("%d", &n3);
  printf("Digite o quarto número: ");
  scanf(" %d", &n4);	

  soma = n1 + n2 + n3 + n4;

  printf("A soma dos números é: %d", soma);
}