#include <stdio.h>

float desconto(float sal);
  
int main (void){
  float sal, desc, sal_liq;

  printf("Digite o salário: ");
  scanf("%f", &sal);
  desc = desconto(sal);
  sal_liq = sal - desc + 50;
  printf("Salário liquido: %.2f", sal_liq);
  return 0;
} 

float desconto(float sal){
  float perc, v_desc;

  printf("Informe o percentual de desconto: ");
  scanf("%f", &perc);

  v_desc = sal * perc / 100;
  return v_desc;
}  