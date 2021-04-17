#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float altura1, altura2, altura3, alturainicial, velin, vel1, vel2, vel3, g;
	
	g = 9.81;
	alturainicial = 2;
	velin = sqrt(2*g*alturainicial);
	altura1 = (2.0/3.0)*alturainicial;
	vel1 = sqrt(2*g*altura1);
	altura2 = (2.0/3.0)*altura1;
	vel2 = sqrt(2*g*altura2);
	altura3 = (2.0/3.0)*altura2;
	vel3 = sqrt(2*g*altura3);
	
	cout << "La velocidad de una pelota que cae desde 2 metros es" << setw(5) << fixed << setprecision(2)
	     << velin << " m/seg" << endl
	     << "La altura 1 a la que llega la pelota en el primer rebote es" << setw(5) << fixed << setprecision(2)
	     << altura1 << " metros" << endl
	     << "La velocidad de la pelota que cae desde la altura 1 es" << setw(5) << fixed << setprecision(2)
	     << vel1 << " m/seg" << endl
	     << "La altura 2 a la que llega la pelota en el segundo rebote es" << setw(5) << fixed << setprecision(2)
	     << altura2 << " metros" << endl
	     << "La velocidad de la pelota que cae desde la altura 2 es" << setw(5) << fixed << setprecision(2)
	     << vel2 << " m/seg" << endl
	     << "La altura 3 a la que llega la pelota en el tercer rebote es" << setw(5) << fixed << setprecision(2)
	     << altura3 << " metros" << endl
	     << "La velocidad de la pelota que cae desde la altura 3 es" << setw(5) << fixed << setprecision(2)
	     << vel3 << " m/seg" << endl;
	
	return 0;
}
