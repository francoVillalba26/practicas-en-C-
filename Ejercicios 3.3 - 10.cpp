#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float e, year, population, a;
	
	year = 2019;
	e = 2.7183;
	a = 0.02*(year-2000);
	population = 6.0*pow(e,a);
	
	cout << "The population in 2019 is" << setw(5) << fixed << setprecision(2)
	     << population << endl;
	
	return 0;
}
