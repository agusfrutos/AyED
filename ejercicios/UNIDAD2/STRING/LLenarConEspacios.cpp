#include <iostream>

using namespace std;

void PedirInput(char* &cadena, short &longitud) {
 cout << "Escriba una cadena\n";
    cin >> cadena;
     cout << "Escriba la longitud de la cadena\n";
    cin >> longitud;
}


void LlenarCadenaConEspacios() {

    cout << "2.Crear la funcion char* FillBlank(char* cad, short n); que rellena la cadena cad de longitud fisica n, con espacios en blanco a derecha." << endl;

    char* cadena;
    short n;
PedirInput(cadena, n);
    cout << cadena << '\n';
    cout << n << '\n';

}
