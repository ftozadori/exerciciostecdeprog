/*4. Faça um programa que receba o salário de um
funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>

int main(void){
  float sal, novosal;

  printf("Digite o salário do funcionário: ");
  scanf("%f", &sal);

  novosal = sal + (sal * 0.25);

  printf("O novo salário do funcionário é: %.2f", novosal);
}  
  