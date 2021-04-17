#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float vel, theta, height;
	
	vel = 5*1609;
	theta = (60*3.1416/180);
	height = (0.5*pow(vel,2)*pow(sin(theta),2))/9.8;
	
	cout << "The height reached by the ball is" << setw(11) << fixed << setprecision(2) << height << endl;
	
	return 0;
	
}
