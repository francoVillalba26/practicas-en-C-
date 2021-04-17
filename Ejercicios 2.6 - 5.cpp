#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int travelTime =  10, carVel = 60, carAcce = 12;
	float carDist = carVel-(1/2)*carAcce*pow(travelTime,2);
	
	cout << "The distance traveled by a car with an initial speed of 60 miles per second" << endl
	     << "that decrease its speed during 10 seconds, is " << carDist
	     << " miles" << endl;
		 
	return 0; 
}
