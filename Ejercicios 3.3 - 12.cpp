#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float k, e, midLife;
	
	e = 2.7183;
	k = 0.00026;
	midLife = log(2)/k;
	
	cout << "La vida media de cierto isotopo de uranio es" << setw(8) << fixed << setprecision(2)
	     << midLife << endl;
	     
	return 0;
}
