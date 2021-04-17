#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x1, x2, y1, y2, pend;
	
	x1 = 3;
	y1 = 7;
	x2 = 8;
	y2 = 12;
	pend = (y2-y1)/(x2-x1);
	
	cout << "El valor de la pendiente es" << setw(6) << fixed<< setprecision(2) << pend << endl;
	
	return 0;
}
