#include <iostream>
using namespace std;

int main ()
{
	int numin1, numin2, numfin, lineas1, lineas2;
	
	numin1 = 100;
	numfin = 10;
	numin2 = numin1 + numfin;
	lineas1 = numin1*(numin1-1)/2;
	lineas2 = numin2*(numin2-1)/2;
	
	cout << "El numero de lineas iniciales es " << lineas1 << endl
	     << "Se necesitan " << lineas2 - lineas1 
		 << " lineas adicionales." << endl;
	
	return 0;
}
