#include<stdio.h>
#include<cstring>

int main(){

char cadenaOrigen[30];
char cadenaDestino[30];

printf("Introduzca la cadena origen: ");
scanf("%s", &cadenaOrigen);

strcpy(cadenaDestino, cadenaOrigen);

printf("%s", cadenaDestino);

  return 0;
}
