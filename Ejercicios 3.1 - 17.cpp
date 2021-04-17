#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float R1, R2, R3, Rcomb, a, b, c;
	
	R1 = 1500;
	R2 = 1200;
	R3 = 2000;
	a = (1/R1);
	b = (1/R2);
	c = (1/R3);
	Rcomb = pow((a+b+c),(-1.0));
	
	cout << "La resistencia combinada del circuito, en ohmios, es " << Rcomb << endl;
	
	return 0;
}
