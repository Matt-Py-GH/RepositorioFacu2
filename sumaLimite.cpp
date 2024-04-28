#include<iostream>
using namespace std;

int main(){

int numeroDesde;
int limite;

cout<<"Introduzca el numero desde el que va a contar: ";
cin >>numeroDesde;
cout<<"Pone el limite: ";
cin>>limite;

if(numeroDesde >= limite){cout<<"limite y numeros no compatibles, asegurese de que el limite sea mayor a su numero...";}
else{

for(numeroDesde; limite >= numeroDesde; numeroDesde++){
    cout<<numeroDesde<<endl;}
}

  return 0;
}
