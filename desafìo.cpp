#include<stdio.h>

//---------------------------------------------------------------------//
int diferencia(){

int numeroUno;
int numeroDos;
int diferencia;

printf("introduzca su primer numero: ");
scanf("%i", &numeroUno);

printf("ahora el segundo: ");
scanf("%i", &numeroDos);

printf("\n");

if(numeroUno > numeroDos){
    diferencia = numeroUno - numeroDos;
    printf("El numero uno es mayor al dos por: %i", diferencia);
}
else if(numeroUno == numeroDos){printf("Son ambos numeros iguales");}

else{diferencia = numeroDos - numeroUno; printf("El numero uno es mayor al dos por: %i", diferencia);}

printf("\n");
printf("\n");

return diferencia;

}
//---------------------------------------------------------------------//

int main(){

int opc = 0;

while(opc != 3){

printf("1-Divisible por 11, 2-Diferencia de dos numeros, 3-Salir");
printf("\n");
printf("Elija una opcion:");
scanf("%i", &opc);

if(opc == 1){divisible();}

else if(opc == 2){diferencia();}

else if(opc == 3){printf("Saliendo...");}

}

  return 0;
}
