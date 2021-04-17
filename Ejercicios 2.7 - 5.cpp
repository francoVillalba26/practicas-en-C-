#include <iostream>

using namespace std;

int main()
{
	float Cels, Fahren;
	
	Fahren = 86.5;
	Cels = (5.0/9.0)*(Fahren-32);
	
	cout << "For a Fahrenheit temperature of " << Fahren << " degrees," << endl
	     << " the equivalent Celsius temperature is " << Cels << " degrees." << endl;
	
	return 0; 
}
