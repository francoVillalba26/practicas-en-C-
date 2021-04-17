#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float x, a, b, serieValue, sinValue;
	
	x = (62.2)*(3.1416/180);
	a = (pow(x,3))/6;
	b = (pow(x,5))/120;
	serieValue = x - a + b;
	sinValue = sin(x);
	
	cout << "The value of the power series of x is" << setw(7) << fixed << setprecision(4) 
	     << serieValue << endl
	     << "The value of the sin of x is" << setw(7) << fixed << setprecision(4) 
	     << sinValue << endl
	     << "The absolute value of the diference between the sin of x and the power series is"
	     << setw(7) << fixed << setprecision(4) << abs(sinValue-serieValue) << endl;
	
	return 0;
}
