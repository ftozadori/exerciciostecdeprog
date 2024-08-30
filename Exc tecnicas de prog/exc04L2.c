/*4. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. Crie 4 sub-rotinas:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 11% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.
Calcule e retorne os valores obtidos nas sub-rotinas. Mostre o salário a receber.*/

#include <stdio.h>

float horaTrabalhada(float salarioMinimo, float horasTrabalhadas);
float calcularSalarioBruto(float salarioMinimo, float horasTrabalhadas);
float imposto(float salarioMinimo, float horasTrabalhadas, float salarioBruto);
float salarioReceber(float salarioMinimo, float horasTrabalhadas, float salarioBruto);

int main(void){
  float salarioMinimo, horasTrabalhadas,sal,salarioBruto;

  printf("Informe o valor do salário mínimo: ");
  scanf("%f", &salarioMinimo);
  printf("Informe o número de horas trabalhadas: ");
  scanf("%f", &horasTrabalhadas);
 
  salarioBruto = calcularSalarioBruto(salarioMinimo, horasTrabalhadas);
  sal = salarioReceber(salarioMinimo, horasTrabalhadas, salarioBruto);

  printf("O valor da hora trabalhada é: %.2f", sal);
}

float horaTrabalhada(float salarioMinimo, float horasTrabalhadas){
  float precohora;

  precohora = salarioMinimo/2;

  return precohora;
}

float calcularSalarioBruto(float salarioMinimo, float horasTrabalhadas){
   float salbruto,precohora;
   
   precohora = horaTrabalhada(salarioMinimo, horasTrabalhadas);
  
   salbruto = precohora * horasTrabalhadas;

  return salbruto;
}

float imposto(float salarioMinimo, float horasTrabalhadas, float salarioBruto){
  float imp;
  
  imp = salarioBruto * 0.11;

  return imp;
}

float salarioReceber(float salarioMinimo, float horasTrabalhadas, float salarioBruto){
  float sal, imp;

  imp = imposto(salarioMinimo, horasTrabalhadas, salarioBruto);
  
  sal =  salarioBruto - imp;

  return sal;
}  

 