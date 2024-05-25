#include<iostream>
using namespace std;


int busquedaBinaria(int lista[], int tamano, int elemento) {
    int principio = 0;
    int ultimo = tamano - 1;

while (principio <= ultimo) {
    int medio = (principio + ultimo) / 2;

    if (elemento == lista[medio]) {return medio;}
    else if (elemento < lista[medio]) {ultimo = medio - 1;}
    else {principio = medio + 1;}

}
    return -1;
}


int main(){

int elementoABuscar;
int lista[15] = {1, 5, 7, 8, 10, 13, 24, 56, 75, 102, 111, 112, 500, 560, 890};
int posicionDelElemento;

cout<<"Insert the element to search: ";
cin>>elementoABuscar;

int tamano = end(lista) - begin(lista);

posicionDelElemento = busquedaBinaria(lista,tamano, elementoABuscar);

if(posicionDelElemento == -1){cout<<"Element not found...";}
else{cout<<"Position is: "<<posicionDelElemento;}

  return 0;
}
