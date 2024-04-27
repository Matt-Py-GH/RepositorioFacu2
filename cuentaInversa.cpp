#include<iostream>
using namespace std;

int main(){

int numeroDesde;

cout <<"Ingrese el valor desde el que va a contar hasta 0: ";
cin >> numeroDesde;

for(int i = numeroDesde; i >= 0; --i){
    cout<<i<< endl;

}


  return 0;
}
