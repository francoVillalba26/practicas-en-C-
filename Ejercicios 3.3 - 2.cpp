#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float A, B, C; 
	
	A = 10.6;
	B = 13.9;
	C = -3.42;
	
	cout << "a) " << int (A) << endl
	     << "b) " << int (B) << endl
	     << "c) " << int (C) << endl
	     << "d) " << int (A+B) << endl
	     << "e) " << int (A)+B+C << endl
	     << "f) " << int (A+B)+C << endl
	     << "g) " << int (A+B+C) << endl
	     << "h) " << float(int (A))+B << endl
	     << "i) " << float(int (A+B)) << endl
	     << "j) " << abs(A)+abs(B) << endl
	     << "k) " << sqrt(abs(A-B)) << endl;
	     
	return 0;
}
