#include<stdio.h>
#include<cstring>

char mensajeDeSemana(char palabra){


if(strcmp(palabra, "Lunes") == 0){printf("Buena semana");}
else if(strcmp(palabra, "Viernes")== 0){printf("Buen finde");}
else{printf("Introduzca si es Lunes o Viernes");}

}


int main(){

char palabra[10];
scanf("%s", &palabra);

impresion = mensajeDeSemana(palabra);
printf(impresion)

  return 0;
}
