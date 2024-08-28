/*2. Faça um programa que receba o valor de um depósito e o valor da taxa de juros. Crie uma sub-rotina que calcule o valor do rendimento. Mostre o valor total depois do rendimento.*/

#include <stdio.h>

float rendimento(float deposito, float taxa);

int main (void){
  float deposito, taxa, rend;

  printf("Informe o valor do depósito: ");
  scanf("%f", &deposito);
  printf("Informe a taxa de juros: ");
  scanf("%f", &taxa);

  rend = rendimento(deposito, taxa);
  printf("O valor total depois do rendimento é: %.2f", rend);
}

float rendimento(float deposito, float taxa){
  float rend;

  rend = deposito + (deposito * taxa/100);

  return rend;
}

  
