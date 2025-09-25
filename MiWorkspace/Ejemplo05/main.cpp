#include <iostream>
using namespace std;
const int minimo = 0, maximo = 10;

int main(int argc, char **argv){
	int n;
    cout << "Introduzca un número entre " << minimo << " y " << maximo << ": ";
    cin >> n;
    if ((n < minimo) || (n > maximo))
        cout << "El valor " << n << " está fuera del rango." << endl;
    else
        switch(n){
            case 0:
                cout << "No existe difinición de primo en este caso" << endl;
                break;
            case 2:
            case 5:
            case 7:
                cout << "El número " << n << " es primo" << endl;
                break;
            default:
                cout << "El número " << n << " no es primo" << endl;
                break;
        };
	return 0;
}