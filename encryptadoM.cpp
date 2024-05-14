#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<string>
#include<stdio.h>
using namespace std;

/*
[X]Declarar varibales
[X]Inicializar variables encrptadoras
[X]Crear un menu while
[X]Crear un for para encryptar/desencryptar
[X]Mostrar resultado
[X]Mandar denuevo al menu
*/

int main()
{

    char hola[90];
    char encr1pt3r[999];       //Palabra a encriptar/desencriptar
    char opcion[1];           //Opcion (En char para prevenir loops infinitos)
    int encr1pt3r_length;     //Cantidad de chars de "encr1pt3r"
    int desicion=0;           //El que te lleva de un lugar a otro
    int i;                    //Contador
    int JuanitoElCaballito=0; //JuanitoElCaballito


    while(desicion!=3) //Menú
    {

        desicion=0;
        printf("|Que hacemos ahora|\n1.Encriptar texto\n2.Desencriptar texto\n3.Yo ya me iba\n\n\n");
        scanf("%s", &opcion);

        if (opcion[0]=='1') desicion=1;
        else if (opcion[0]=='2') desicion=2;
        else if (opcion[0]=='3') desicion=3;


        switch(desicion)
        {
        case 1:
            //Encriptador (Encripta una sola palabra)
            printf("Bueno dale, escribi lo que queres encriptar\n");
            scanf("%s", encr1pt3r);
//strcpy(hola, encr1pt3r);

            encr1pt3r_length=strlen(encr1pt3r);
//printf("%i", encr1pt3r_length);

            for(i=0; i<=encr1pt3r_length; i++)
            {
                if(encr1pt3r[i]=='a' || encr1pt3r[i]=='A') encr1pt3r[i]='#'; ///*Podria hacer todas las mayus, pero no
                else if(encr1pt3r[i]=='b') encr1pt3r[i]='&';
                else if(encr1pt3r[i]=='c') encr1pt3r[i]='(';
                else if(encr1pt3r[i]=='d') encr1pt3r[i]='>';
                else if(encr1pt3r[i]=='e') encr1pt3r[i]=';';
                else if(encr1pt3r[i]=='f') encr1pt3r[i]='}';
                else if(encr1pt3r[i]=='g') encr1pt3r[i]='\\';
                else if(encr1pt3r[i]=='h') encr1pt3r[i]='!';
                else if(encr1pt3r[i]=='i') encr1pt3r[i]='`';
                else if(encr1pt3r[i]=='j') encr1pt3r[i]='¿';
                else if(encr1pt3r[i]=='k') encr1pt3r[i]='=';
                else if(encr1pt3r[i]=='l') encr1pt3r[i]='|';
                else if(encr1pt3r[i]=='m') encr1pt3r[i]='^';
                else if(encr1pt3r[i]=='n') encr1pt3r[i]='"';
                else if(encr1pt3r[i]=='o') encr1pt3r[i]='°';
                else if(encr1pt3r[i]=='p') encr1pt3r[i]=')';
                else if(encr1pt3r[i]=='q') encr1pt3r[i]='¬';
                else if(encr1pt3r[i]=='r') encr1pt3r[i]=']';
                else if(encr1pt3r[i]=='s') encr1pt3r[i]='$';
                else if(encr1pt3r[i]=='t') encr1pt3r[i]='~';
                else if(encr1pt3r[i]=='u') encr1pt3r[i]='V';
                else if(encr1pt3r[i]=='v') encr1pt3r[i]='_';
                else if(encr1pt3r[i]=='w') encr1pt3r[i]='*';
                else if(encr1pt3r[i]=='x') encr1pt3r[i]='+';
                else if(encr1pt3r[i]=='y') encr1pt3r[i]='/';
                else if(encr1pt3r[i]=='z') encr1pt3r[i]='<';
            }

            printf("%s", encr1pt3r);
            cout<<endl <<endl;
            break;


        case 2:
            //Desencriptador (Desencritpta solo una palabra)
            printf("Bueno dale, escribi lo que queres desencriptar\n");

            scanf("%s", &encr1pt3r);

            encr1pt3r_length=strlen(encr1pt3r);

            for(i=0; i<=encr1pt3r_length; i++)
            {
                if(encr1pt3r[i]=='#') encr1pt3r[i]='a'; ///*Podria hacer todas las mayus, pero no
                else if(encr1pt3r[i]=='&') encr1pt3r[i]='b';
                else if(encr1pt3r[i]=='(') encr1pt3r[i]='c';
                else if(encr1pt3r[i]=='>') encr1pt3r[i]='d';
                else if(encr1pt3r[i]==';') encr1pt3r[i]='e';
                else if(encr1pt3r[i]=='}') encr1pt3r[i]='f';
                else if(encr1pt3r[i]=='\\') encr1pt3r[i]='g';
                else if(encr1pt3r[i]=='!') encr1pt3r[i]='h';
                else if(encr1pt3r[i]=='`') encr1pt3r[i]='i';
                else if(encr1pt3r[i]=='¿') encr1pt3r[i]='j';
                else if(encr1pt3r[i]=='=') encr1pt3r[i]='k';
                else if(encr1pt3r[i]=='|') encr1pt3r[i]='l';
                else if(encr1pt3r[i]=='^') encr1pt3r[i]='m';
                else if(encr1pt3r[i]=='"') encr1pt3r[i]='n';
                else if(encr1pt3r[i]=='°') encr1pt3r[i]='o';
                else if(encr1pt3r[i]==')') encr1pt3r[i]='p';
                else if(encr1pt3r[i]=='¬') encr1pt3r[i]='q';
                else if(encr1pt3r[i]==']') encr1pt3r[i]='r';
                else if(encr1pt3r[i]=='$') encr1pt3r[i]='s';
                else if(encr1pt3r[i]=='~') encr1pt3r[i]='t';
                else if(encr1pt3r[i]=='V') encr1pt3r[i]='u';
                else if(encr1pt3r[i]=='_') encr1pt3r[i]='v';
                else if(encr1pt3r[i]=='*') encr1pt3r[i]='w';
                else if(encr1pt3r[i]=='+') encr1pt3r[i]='x';
                else if(encr1pt3r[i]=='/') encr1pt3r[i]='y';
                else if(encr1pt3r[i]=='<') encr1pt3r[i]='z';
            }

            printf("%s", encr1pt3r);
            cout<<endl <<endl;
            break;


        } //Switch

    } //While

    printf("\nGracias por usar Aereolineas mjj...");
    return 0;
}
