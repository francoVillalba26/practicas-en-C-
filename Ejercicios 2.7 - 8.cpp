#include <iostream>
using namespace std;

int main()
{
	int n, a, d, suma;
	
	n = 1000;
	a = 100;
	d = 10;
	suma = (n/2)*(2*a+((n-1)*d));
	
	cout << "The sum of numbers from 1 to 100 is " << suma << endl;
	
	return 0;
}
