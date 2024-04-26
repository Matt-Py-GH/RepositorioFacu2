#include<iostream>
using namespace std;

int main(){

int numeroIngresado;
string NoEsP = "El numero NO es primo";

cout << "Ingrese su numero para ver si es o no primo: "<<endl;
cin >> numeroIngresado;
if(numeroIngresado == 2){cout << "El numero es primo."; NoEsP.erase(0, 21);}
if(numeroIngresado == 3){cout << "El numero es primo."; NoEsP.erase(0, 21);}
if(numeroIngresado == 5){cout << "El numero es primo."; NoEsP.erase(0, 21);}
if(numeroIngresado == 7){cout << "El numero es primo."; NoEsP.erase(0, 21);}

if(numeroIngresado % 2 != 0 && numeroIngresado % 3 != 0 && numeroIngresado % 4 != 0 &&
   numeroIngresado % 5 != 0 && numeroIngresado % 6 != 0 && numeroIngresado % 7 != 0 &&
   numeroIngresado % 8 != 0 && numeroIngresado % 9 != 0 && numeroIngresado % numeroIngresado == 0){
    cout << "El numero es primo.";
}

else{cout<<NoEsP;}

  return 0;
}
