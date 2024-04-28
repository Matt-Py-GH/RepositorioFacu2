#include<iostream>
#include<cstring>
using namespace std;


int main(){

char usuarioCargado[] = "Mateo";
char usuarioIngresado[10];
const char contrasenaCargada[] = "ABC1234";
char contrasenaIngresada[10];

cout<<"Ingrese su usuario: " <<endl;
cin>>usuarioIngresado;
cout<<"ingrese ahora su contrasena: "<<endl;
cin>>contrasenaIngresada;

if(strcmp(usuarioCargado, usuarioIngresado) == 0 && strcmp(contrasenaCargada, contrasenaIngresada) == 0){

    cout << "Inicio de sesion exitoso.";
}
else{cout<<"usuario o contrasena incorrectos";}


  return 0;
}
