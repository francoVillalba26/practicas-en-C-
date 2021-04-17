#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float E1, E2, R1, R2, R3, i1, i2, i3, a;
	
	E1 = 15;
	E2 = 12;
	R1 = 1500;
	R2 = 1200;
	R3 = 2000;
	a = pow(R3,2);
	i1 = ((E2*R3)+(E1*(R1+R3)))/(((R1+R3)*(R2+R3))-a);
	i2 = ((E1*R3)+(E2*(R1+R3)))/(((R1+R3)*(R2+R3))-a);
	i3 = i1-i2;
	
	cout << "La corriente en el ramal 1 es" << setw(8) << fixed << setprecision(5) << i1 << " A" << endl
	     << "La corriente en el ramal 2 es" << setw(8) << fixed << setprecision(5) << i2 << " A" << endl
	     << "La corriente en el ramal 3 es" << setw(8) << fixed << setprecision(5) << i3 << " A" << endl;
	
	return 0;
}
