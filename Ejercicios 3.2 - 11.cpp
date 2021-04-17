#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x1, x2, y1, y2, middlePointx, middlePointy ;
	
	x1 = 3;
	y1 = 7;
	x2 = 8;
	y2 = 12;
	middlePointx = (x1+x2)/2;
	middlePointy = (y1+y2)/2;
	
	cout << "La coordenada x del punto medio es" << setw(6) << fixed << setprecision(2) << middlePointx << endl
	     << "La coordenada y del punto medio es" << setw(6) << fixed << setprecision(2) << middlePointy << endl;
	
	return 0;
	 
}
