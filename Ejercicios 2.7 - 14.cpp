#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a11, a12, a21, a22, c1, c2, X1, X2;
	
	a11 = 3;
	a12 = 4;
	c1 = 40;
	a21 = 5;
	a22 = 2;
	c2 = 34;
	X1 = ((c1*a22)-(c2*a12))/((a11*a22)-(a12*a21));
	X2 = ((c2*a11)-(c1*a21))/((a11*a22)-(a12*a21));
	
	cout << "X1 = " << X1 <<  " - X2 = " << X2 << endl;
	
	return 0; 
	
}
