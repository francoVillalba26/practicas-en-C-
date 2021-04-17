#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float x, y, r, theta;
	
	r = 12.5;
	theta = 67.8*(3.1416/180);
	x = r * cos(theta);
	y = r * sin(theta);
	
	cout << "La coordenada x es" << setw(6) << fixed << setprecision(2) << x << endl
	     << "La coordenada y es" << setw(6) << fixed << setprecision(2) << y << endl;
	     
	return 0;	
}
