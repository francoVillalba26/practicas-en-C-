#include <iostream>
using namespace std;

int main()
{
	double velocidad, f0, f1;
	
	f0 = 2e-10;
	f1 = 2.00000035e-10;
	
	velocidad = 6.68e8 * (f1 - f0) / (f1 + f0);
	cout << "The velocity is " << velocidad << " millas/hora " << endl;
	
	return 0;
}
