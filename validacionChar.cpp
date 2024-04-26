#include <iostream>
#include <cstring>
using namespace std;


const char usuario_establecido[] = "usuario";
const char contrasena_establecida[] = "contrasena";

int main() {

    char usuario_ingresado[100];
    char contrasena_ingresada[100];

    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario_ingresado;

    cout << "Ingrese su contraseña: ";
    cin >> contrasena_ingresada;

    if (strcmp(usuario_ingresado, usuario_establecido) == 0 && strcmp(contrasena_ingresada, contrasena_establecida) == 0) {
        cout << "Inicio de sesión exitoso." << endl;
    }

    else {cout << "Nombre de usuario o contraseña incorrectos." << endl;}


    return 0;
}
