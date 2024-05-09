#include<stdio.h>
#include<cstring>

int main(){

char palabra[30];
printf("Ingrese la word: ");
scanf("%s", &palabra);
int largo = strlen(palabra);


switch(largo){
case 1:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 2:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 3:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 4:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 5:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 6:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
case 7:
    printf("Tiene la siguiente cantidad de caracteres: %i", largo);
    break;
default:
    printf("Tiene mas de 7 caracteres de largo...");
    break;

}

  return 0;
}
