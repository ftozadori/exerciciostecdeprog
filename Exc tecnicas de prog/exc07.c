/*7. Faça um programa que calcule e mostre a área de
  um círculo. Sabe-se que: Área = π * R2.*/

#include <stdio.h>

int main(void) {
   float r,area;

  printf("Digite o raio do círculo: ");
    scanf("%f" ,&r);

area = 3.14 * (r * r);  
  printf("A área do círculo é: %.2f" ,area);
}