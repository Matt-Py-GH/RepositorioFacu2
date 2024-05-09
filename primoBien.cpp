#include<stdio.h>

int main(){

int numero;
int i = 1;
int contador = 0;

printf("Introduzca su numero: ");
scanf("%i", &numero);

while(i<=numero){
    if(numero % i == 0){contador += 1;}
    i += 1;

}
if(contador > 2){printf("No es primo.");}
else if(contador <= 2){printf("ES primo.");}


  return 0;
}
