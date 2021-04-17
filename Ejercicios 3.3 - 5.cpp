#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, x2, y1, y2, dist, a, b;
	
	x1 = -12;
	y1 = -15;
	x2 = 22;
	y2 = 5;
	a = pow((x1-x2),2);
	b = pow((y1-y2),2);
	dist = sqrt(a+b);
	
	cout << "La distancia entre dos puntos es " << dist << endl;
	
	return 0;
}
