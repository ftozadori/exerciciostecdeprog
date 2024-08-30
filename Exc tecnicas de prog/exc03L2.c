/*3. Faça um programa que receba um número positivo e maior que zero. Crie 4 sub-rotinas que:
a) eleva o número digitado ao quadrado;
b) eleva o número digitado ao cubo;
c) obtém a raiz quadrada do número digitado;
d) obtém a raiz cúbica do número digitado.
Mostre o resultado dos cálculos.*/

#include <math.h>
#include <stdio.h>

float quadrado(float num);
float cubo(float num);
float raizquadrada(float num);
float raizcubica(float num);

int main(void){
   float num, rsqdd, rscbb, rsrzqdd, rsrzcbb;

  printf("Digite um numero positivo e maior que zero: ");
  scanf("%f", &num);

 rsqdd = quadrado(num);
 rscbb = cubo(num);
 rsrzqdd = raizquadrada(num);
 rsrzcbb = raizcubica(num);

  printf("O quadrado do numero digitado e: %.2f\n", rsqdd);
  printf("O cubo do numero digitado e: %.2f\n", rscbb);
  printf("A raiz quadrada do numero digitado e: %.2f\n", rsrzqdd);
  printf("A raiz cubica do numero digitado e: %.2f\n", rsrzcbb);
}

float quadrado(float num){
  float qdd;

  qdd = num * num;

  return qdd;
}

float cubo(float num){
  float cbb
;
  cbb = num * num * num;

  return cbb;
}

float raizquadrada(float num){
  float rzqdd;

  rzqdd = sqrt(num);
  
  return rzqdd;
}

float raizcubica(float num){
  float rzcbb;

  rzcbb = cbrt(num);

  return rzcbb;
}
  
  
    
    