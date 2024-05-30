#include <iostream>
#include <math>

using namespace std;

int trianguloRectangulo()
{
    float a, b, c;

    cout << "Determine el valor del cateto a: " << endl;
    cin >> a;

    cout << "Determine el valor del cateto b: " << endl;
    cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));
    cout << "El valor de la hipotenusa es: " << c;

    return 0;
}
