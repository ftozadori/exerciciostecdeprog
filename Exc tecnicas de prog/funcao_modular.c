#include <stdio.h>

float calculo(float sal) {
  float perc, valor;

  printf("Informe o percentual de aumento: ");
  scanf("%f", &perc);

  valor = sal * (perc / 100);

  return valor;
}
int main (void){
  float sal, aum, novo_sal;

  printf("Informe o salário: ");
  scanf("%f", &sal);
  aum = calculo(sal);
  novo_sal = sal + aum;
  printf("O aumento de R$%.2f e o novo salário é R$%.2f", aum, novo_sal);
  return 0;
}