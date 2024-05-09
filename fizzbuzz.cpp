#include<stdio.h>

int main(){

int numero;
for(int numero = 1; numero <= 100; numero++){

    if(numero % 5 == 0 && numero % 3 == 0){printf("fizzbuzz \n");}
    else if(numero % 3 != 0 && numero % 5 != 0){printf("%i \n", numero);}
    else if(numero % 5 == 0){printf("buzz \n");}
    else if(numero % 3 == 0){printf("fizz \n");}

}

    return 0;
}
