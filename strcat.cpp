#include<stdio.h>
#include<cstring>

int main(){

char proco[20] = "Procodem: ";
char nombreUsuario[20];

printf("Introduzca el nombre de usuario: ");

scanf("%s", &nombreUsuario);

strcat(proco, nombreUsuario);

printf("%s", proco);

}
