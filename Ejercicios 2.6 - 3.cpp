#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float fergios = 14.65, pi = 3.1416, nu = 1.672, e = 2.7818;
	float Lergios = 2*pi*(pow(e,nu));
	float Ergios = fergios*(pow(Lergios, (1/2)));
	
	cout << "El valor de Ergios para los datos del problema es de " << Ergios << endl;
	
	return 0;
}
