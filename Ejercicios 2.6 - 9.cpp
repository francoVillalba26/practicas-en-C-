#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float sigma = 4, nu = 90, x = 80, pi = 3.1416, e = 2.7818;
	float a = pow((2*pi),0.5);
	float b = (x-nu);
	float c = pow ((b/sigma),2);
	float d = (-0.5)*c;
	float m = pow(e,d);
	float y = (m)/(sigma*a);
	
	cout << "the value of y is " << y << endl;

	return 0;
}
