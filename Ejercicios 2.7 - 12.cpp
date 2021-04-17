#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float E, t, R, C, e, a, i;
	
	E = 25;
	t = 0.85;
	R = 220;
	C = 3.9e-4;
	e = 2.718;
	a = pow(e,(t/(R*C)));
	i = E/(R*a);
	
	cout << "The electric current of the circuit is " << i << endl;
	
	return 0;
}
