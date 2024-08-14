/*5. Faça um programa que receba o salário de um
funcionário e o percentual de aumento, calcule e
mostre o valor do aumento e o novo salário.*/

#include <stdio.h>

int main(void){
  float sal,aumento,novosal;
      printf("Digite o salario do funcionario: ");
      scanf("%f",&sal);
      printf("Digite o percentual de aumento: ");
      scanf("%f",&aumento);

  novosal = sal + (sal * aumento/100);

  printf ("O novo salario eh: %.2f, com o aumento de %.0f porcento",novosal, aumento);
}