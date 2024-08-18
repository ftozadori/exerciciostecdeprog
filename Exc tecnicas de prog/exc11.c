/*11. Faça um programa que receba o número de horas
trabalhadas e o valor do salário mínimo, calcule e mostre o
salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas
trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o
imposto.*/

#include <stdio.h>

int main(void) {
  float horas, salario, salariobruto, imposto, salarioreceber,horastrabalhadas;

  printf("Digite o número de horas trabalhadas: ");
   scanf("%f", &horas);
  printf("Digite o valor do salário mínimo: ");
   scanf("%f", &salario);

  horastrabalhadas = salario / 2;
  salariobruto = horastrabalhadas * horas;
  imposto = salariobruto * 0.03;
  salarioreceber = salariobruto - imposto;

   printf("O salário a receber é: %.2f\n", salarioreceber);
}