#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double E, e, R, L, t, a1, a2, b1, b2, i1, i2;
	
	E = 25;
	e = 2.718;
	R = 33.0;
	L = 15.0;
	t = 0.12;
	a1 = pow((1.0-e),R); 
	b1 = pow(a1,(t/L));
	a2 = a1*(-1);
	b2 = pow(a2,(t/L));
	i1 = (E/R)*(1/b1);
	i2 = (E/R)*(1/b2)*(-1); 
	
	cout << "The electric current that circulates through the circuit is " << i1 << " " << i2 << " A." << endl;
	
	cout << endl << a1 << endl << b1 << endl << a2 << endl << b2 << endl;
	
	
	return 0;
}
