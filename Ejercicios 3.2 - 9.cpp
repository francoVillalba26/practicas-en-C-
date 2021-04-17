#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float R1, R2, R3, Re, a, b, c;
	
	R1 = 1000;
	R2 = 1000;
	R3 = 1000,
	a = 1/R1;
	b = 1/R2;
	c = 1/R3;
	Re = 1/(a+b+c);
	
	cout << "La resistencia combinada es" << setw(7) << fixed << setprecision(2) << Re << " ohmios" << endl;
	
	return 0;
}
