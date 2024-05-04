#include<iostream>
using namespace std;

int fibo(int limite){

if(limite == 0){return 0;}
else if(limite == 1){return 1;}
else{return fibo(limite-1)+fibo(limite-2);}

}

int main(){

int limite, valor;
cout<<"que valor de fibonacci desea ver en su lista: ";
cin>>limite;

valor = fibo(limite);
cout<<valor<<endl;

  return 0;
}
