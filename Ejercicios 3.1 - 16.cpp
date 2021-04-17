#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pi, a, b, c, Circ;
	
	pi = 3.1416;
	a = 2.5;
	b = 6.4;
	c = pow((a+b),2);
	Circ = pi*pow(c,0.5);
	
	cout << "La circunferencia de la elipse es " << Circ << endl;
	
	return 0;
}
