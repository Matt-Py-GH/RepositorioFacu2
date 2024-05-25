#include<iostream>
using namespace std;

int busquedaSecuencial(int elemento){

int pos;
int arreglo[10] = {13, 42, 32, 42, 53, 6, 7, 8, 2, 10};
int i;

for(i = 0; i<=10; i++){
    if(elemento == arreglo[i]){pos = i;}
}

  return pos;
}


int main(){

int elemento;
int posicion;

while(true){
cin>>elemento;

posicion = busquedaSecuencial(elemento);
cout<<posicion;

}
  return 0;
}
