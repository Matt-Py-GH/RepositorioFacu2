#include<stdio.h>


int main(){

float temperaturaIngresada;

printf("Introduzca la temperatura que desea calcular: ");
scanf("%f", &temperaturaIngresada);

printf("La temperatura pasa a Frenheit es: %f", temperaturaIngresada * 9/5 + 32);

  return 0;
}
