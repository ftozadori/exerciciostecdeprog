/*6. Faça um programa que calcule e mostre a área de
um triângulo. Sabe-se que: Área = (base * altura)/2.
*/

#include <stdio.h>

int main(void){
  float base, altura, area;
    printf("Digiite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("A area do triangulo eh: %.2f", area);
  
}