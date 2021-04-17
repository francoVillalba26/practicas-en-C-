#include <iostream>
using namespace std;

int main()
{
	float x1, x2, y1, y2, pend;
	
	x1 = 2;
	y1 = 10;
	x2 = 12;
	y2 = 6;
	pend = (y2-y1)/(x2-x1);
	
	cout << "La pendiente es " << pend << endl;
	
	return 0;
}
