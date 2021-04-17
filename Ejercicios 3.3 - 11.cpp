#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float remainMat, origMat, e, N, a, b;
	
	e = 2.7183;
	N = 275;
	origMat = 250;
	a = -0.00012*N;
	b = pow(e,a);
    remainMat = origMat*b;
    
    cout << "The remaining material of 250 grams of an radioactive isotope" 
	     << "\nafter 275 years is " << setw(6) << fixed << setprecision(2)
         << remainMat << " grams" << endl;
    
    return 0;
}
