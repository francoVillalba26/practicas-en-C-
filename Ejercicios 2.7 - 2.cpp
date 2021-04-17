#include <iostream>
using namespace std;

int main()
{
	double vel, f0, f1;
	
	f0 = 2e10;
	vel = 75;
	f1 = -f0*((6.685e8+vel)/(vel-6.685e8));
	
	cout << "The returned frecuency corresponding to 55 miles per hour is " << f1 << endl;
	
	return 0;
}
