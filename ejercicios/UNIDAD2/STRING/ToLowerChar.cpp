#include <iostream>

using namespace std;


char LowCase(char car) {

if (car >= 'A' && car <= 'Z') {
    return car + 32;
} else return car;


}

void ToLowerChar() {

cout << "3.Crear la funcion char LowCase(char car ); que convierte el caracter dado a minuscula, si esta en mayuscula, caso contrario retorna el mismo caracter." << endl;;

char caracter;

cout << "Ingrese un caracter" << endl;
cin >> caracter;


caracter = LowCase(caracter);

cout << caracter << endl;

}
