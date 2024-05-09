#include<stdio.h>


int main(){

float ladoUno, ladoDos, ladoTres;
printf("Introduzca los 3 lados de su triangulo: ");
scanf("%i%i%i", &ladoUno, &ladoDos, &ladoTres);

if(ladoDos <= 0 || ladoTres <= 0 || ladoUno <= 0){printf("El lado del triangulo debe ser mayor a 0...");}
else{
if(ladoDos == ladoUno && ladoUno == ladoTres){printf("El triangulo es equilatero.");}
else if(ladoUno == ladoDos && ladoUno != ladoTres){printf("EL triangulo es isoceles.");}
else if(ladoUno == ladoTres && ladoUno != ladoDos){printf("EL triangulo es isoceles.");}
else if(ladoTres == ladoDos && ladoUno != ladoTres){printf("EL triangulo es isoceles.");}
else if(ladoUno != ladoTres && ladoTres != ladoDos){printf("el triangulo es escaleno.");}
}

  return 0;
}
