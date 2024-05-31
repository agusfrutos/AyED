#include <iostream>

using namespace std;

char* Replicate(char car, short n) {

char* cadena;
cadena = new char[n];
unsigned i;

for(i = 0; i < n; i++) cadena[i] = car;

cadena[i] = '\0';

return cadena;
}

void RepetirCaracter() {

char car;
short n;

cout << "1: Crear la funcion " << '"' << "char* Replicate(char car, short n)" << '"' << " que retorna el caracter dado n veces." << endl;

cout << "Seleccione un caracter" << endl;
cin >> car;

cout << "Seleccione cantidad de veces que se repetira " << car << '.' << endl;
cin >> n;

char* resp;

resp = Replicate(car, n);

cout << resp << endl;


}
