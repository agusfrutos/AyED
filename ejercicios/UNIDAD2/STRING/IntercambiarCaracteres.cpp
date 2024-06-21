#include <iostream>
using namespace std;

void CmbCar(char* &cad, char car1,char car2) {

    for(short i = 0; i < strlen(cad); i++) {
        if (cad[i] == car1) cad[i] = car2;
    }

}
void IntercambiarCaracteres() {



cout << "5.Crear la funcion void CmbCar(char* cad, char car1, char car2); que reemplaza cada aparicion del car1 en cad, por el car2." << endl;

char* cadena;
char car1, car2;
cout << "Ingrese la sentencia" << endl;
cin >> cadena;

cout << "Ingrese el primer caracter" << endl;
cin >> car1;

cout << "Ingrese el segundo caracter" << endl;
cin >> car2;

//CmbCar(cadena, car1, car2);

cout << "Resultado final: " << cadena << endl;

}
