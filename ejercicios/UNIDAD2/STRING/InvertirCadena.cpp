#include <iostream>
#include <string>

using namespace std;

char* InvCad(char* cad) {

short n = strlen(cad) - 1;

    for(short i = 0; i < n;i++) {

        char aux = cad[i];
        cad[i] = cad[n];
        cad[n] = aux;
        n--;
    }
return cad;
}

void InvertirCadena() {

cout << "4.Crear la funcion char* InvCad(char* cad; que invierte una cadena." << endl;

char* cadena;
cadena = new char[20];

cout << "Ingrese una cadena" << endl;
cin >> cadena;

cadena = InvCad(cadena);

cout << "Resultado: " << cadena << endl;


}
