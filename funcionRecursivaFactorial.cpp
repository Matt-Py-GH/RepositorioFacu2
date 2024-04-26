#include<stdio.h>


int factorial(int i){

if(i < 0){printf("Su valor no tiene factorial, introduzcalo nuevamente...");}
if(i == 0){i = 1;}
else{i = i*factorial(i-1);}


    return i;
}


int main(){

int i;

printf("Ingrese el valor para fer su factorial: ");
scanf("%i", &i);

int valor = factorial(i);
printf("El factorial es: %i", valor);


  return 0;
}
