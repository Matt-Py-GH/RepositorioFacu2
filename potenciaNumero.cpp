#include<iostream>
using namespace std;


int potencia(int numero, int exponente){



if(exponente == 0){return 1;}
else if(exponente == 1){return numero;}
else{return numero*potencia(numero, exponente-1);}


}

int main(){

int numero;
cout<<"Introduzca un numero: ";
cin>>numero;
int exponente;
cout<<"Introduzca el exponente: ";
cin>>exponente;

int resultado = potencia(numero, exponente);
cout<<"el resultado de su operacion es: "<<resultado<<endl;

  return 0;
}
