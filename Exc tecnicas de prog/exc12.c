/*12. Pedro comprou um saco de ração com peso em
quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária
de ração fornecida para cada gato é sempre a mesma.
Faça um programa que receba o peso do saco de ração
e a quantidade de ração fornecida para cada gato,
calcule e mostre quanto restará de ração no saco após
cinco dias.*/

#include <stdio.h>

int main(void) {
  float peso, racao, resto,conver,pesofinal;

  printf("Informe o peso do saco de ração em kg: ");
   scanf("%f", &peso);
  printf("Informe a quantidade de ração fornecida para um gato em gramas: ");
   scanf("%f", &racao);

  conver = peso * 1000;
  resto = conver - (5 * (racao * 2));
  pesofinal = resto / 1000;

    printf("A quantidade de ração restante no saco após 5 dias é de: %.2f kg", pesofinal); 
}