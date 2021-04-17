#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float longStair, degStair, height;
	
	longStair = 20;
	degStair = (85*3.1416/180);
	height = 20*(sin(degStair));
	
	cout << "The height at which the ladder can reach is " << height << " feets"<< endl;
	
	return 0; 
}
