#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float T, A, e, k, t, TFIN;
	T = 150;
	A = 50;
	e = 2.711828;
	k = 0.0367;
	t = 10;
	TFIN = (T-A)*(pow(e,(-k*t)))+A;
	
	cout << "The final temperature of the object is " << TFIN << " degrees" << endl; 
	
	return 0;
}
