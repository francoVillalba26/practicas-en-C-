#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float X, W, L, M;
	
	X = 4.567;
	W = 57.67;
	L = 13.5678;
	M = (X*W*(L-X))/L;
	
	cout << "El momento de flexion maxima es" << setw(9) << fixed << setprecision(4) << M << endl;
	
	return 0;
}
