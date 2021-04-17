#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float Ve1 = 1.2, f1 = 144, Ve2 = 2.3, f2 = 100;
	float Vs1 = (150*Ve1)/(0.38*f1);
	float m = pow(56,2);
	float n = pow((0.98*f2),2);
	float o = pow((m+n),(0.5));
	float Vs2 = (230*Ve2)/o;
	
	cout << "The ouput voltage is Vs1 = " << Vs1
         << " Volts" << endl
         << "The ouput voltage is Vs2 = " << Vs2
         << " Volts" << endl;
    
    return 0;
}
