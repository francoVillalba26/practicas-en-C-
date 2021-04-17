#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float f, n, a, b, c, d, voltGain;
	
	f = 9500;
	n = 12;
	a = pow(23,2);
	b = pow((0.5*f),2);
	c = pow((a+b),(1.0/2.0));
	d = 275/c;
	voltGain = pow(d,n);
	
	cout << "To a frecuency of " << f << " hertz, " 
	     << "the voltage gain is " << voltGain << endl;
    
	return 0;
}
