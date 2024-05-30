#include <iostream>
#include "math.h"

#define FIN_EJERCICIO "*"

const MIN = 23, MAX = 72;

void PreguntarNombre(char nombre[]) {

std::cout << "Por favor, ingrese su nombre (Ingrese \"*\" para terminar examen)" << std::endl;
std::cin >> nombre;
}

int generarNumeroAleatorio(int min, int max) {
    return random(max - min + 1) + min;
}

char DeterminarTipoTriangulo(int lado1, int lado2,int lado3) {

if (lado1 == lado2) {
    if (lado1 == lado3) {
        return 'Q';
    } else return 'I';
}

return 'E';

}

void GenerarTriangulo(int& lado1, int& lado2, int& lado3) {

	lado1 = generarNumeroAleatorio(MIN, MAX);
	lado2 = generarNumeroAleatorio(MIN, MAX);

	do {
        lado3 = generarNumeroAleatorio(MIN, MAX);
	} while (!(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1));
}

bool TestAlumno(int lado1,int lado2,int lado3)
{
    int perimetroAlumno;
    char tipoTriAlumno;
    int perimetro = lado1 + lado2 + lado3;

    std::cout << "Primera pregunta" << std::endl;
    std::cout << "Sabiendo que los lados del triangulo miden: " << lado1 << " " << lado2 << " " << lado3 << std::endl;
    std::cout << "Determine su perimetro:" << std::endl;
    std::cin >> perimetroAlumno;


    std::cout << "Ahora, la segunda y ultima pregunta, determine que tipo de triangulo forma, indicado la inicial" << std::endl;
    std::cout << "[E]-Escaleno" << std::endl;
    std::cout << "[I]-Isosceles" << std::endl;
    std::cout << "[Q]-Equilatero" << std::endl;
    do {
        std::cin >> tipoTriAlumno;
         tipoTriAlumno = std::toupper(tipoTriAlumno);

           std::cout << tipoTriAlumno << std::endl;

    } while (tipoTriAlumno != 'E' && tipoTriAlumno != 'Q' && tipoTriAlumno != 'I');

    if (perimetroAlumno != perimetro) return false;
    if (tipoTriAlumno != DeterminarTipoTriangulo(lado1,lado2,lado3)) return false;

    return true;
}


int ExamenGeometria() {

std::cout << "Bienvenidos al examen de geometria" << std::endl;

char nombre[31];
int a, b, c;
int totalAprobados, totalDesaprobados = 0;

while (strcmp(nombre, FIN_EJERCICIO)) {

PreguntarNombre(nombre);

GenerarTriangulo(a, b, c);

bool aprobado = TestAlumno(a,b,c);

if(aprobado){
    std::cout << "Felicidades! Usted ha aprobado" << std::endl;
    totalAprobados++;
} else {
std::cout << "Usted ha desaprobado" << std::endl;
totalDesaprobados++;
}

  std::cout << "Gracias por participar" << std::endl;
};


return 0;
}
