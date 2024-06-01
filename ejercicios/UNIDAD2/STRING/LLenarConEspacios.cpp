#include <iostream>
#include <string>
using namespace std;

void PedirInput(char* &cadena, short &longitud) {

    cout << "Ingrese la longitud del string" << endl;
    cin >> longitud;

    cadena = new char[longitud];
    cout << "Ingrese la cadena" << endl;
    cin >> cadena;

}

    char* FillBlank(char* cad, short n) {

    short length = strlen(cad);

    if (length < n) {
        for(short i = length; i < n; i++) {
            cad[i] = ' ';
        }
    }
    cad[n]= '\0';


        return cad;
    }


void LlenarCadenaConEspacios() {
    cout << "2.Crear la funcion char* FillBlank(char* cad, short n); que rellena la cadena cad de longitud fisica n, con espacios en blanco a derecha." << endl;

    char* cadena;
    short n;
    PedirInput(cadena, n);

    char* cadenaFinal;

    cadenaFinal = FillBlank(cadena, n);


    cout << '"' << cadena << '"' << '\n';
    cout << '"' << cadenaFinal << '"' << '\n';
    cout << n << '\n';
}
