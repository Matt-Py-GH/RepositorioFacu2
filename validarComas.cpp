#include<iostream>
using namespace std;

int main(){

float posibleComa;
int parteEntera;

cout<<"introduzca un numero: ";
cin>>posibleComa;

parteEntera = posibleComa;

if(posibleComa == parteEntera){
    cout<<"numero sin coma";
}else{cout<<"con coma";}



  return 0;
}
