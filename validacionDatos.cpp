#include<stdio.h>
#include<cstring>


int main(){

char usuarioCargado[] = "Mateo";
char usuarioIngresado[10];
const char contrasenaCargada[] = "ABC1234";
char contrasenaIngresada[10];

printf("Ingrese su usuario: ");
scanf("%s", &usuarioIngresado);
printf("ingrese ahora su contrasena: ");
scanf("%s", &contrasenaIngresada);

if(strcmp(usuarioCargado, usuarioIngresado) == 0 && strcmp(contrasenaCargada, contrasenaIngresada) == 0){

    printf("Inicio de sesion exitoso.");
}
else{printf("usuario o contrasena incorrectos");}


  return 0;
}
