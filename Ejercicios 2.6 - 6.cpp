#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float initCap = 24, inter = 0.05, timePeriod = 2019-1627;
	double m = pow((1+inter),timePeriod);
	double finCap = initCap*m;
	
	cout << "The balance as of december 31, 2019 is " << finCap << endl;
	
	return 0;
}
