#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float Po, Pi, Amp, Decibel;
	
	Po = 4.639;
	Pi = 1;
	Amp = 50;
	Decibel = 10*log10(Po/Pi);
	
	cout << "La ganancia en decibelios es" << setw(6) << fixed << setprecision(2)
	     << Decibel << " dB" << endl;
	
	return 0;
}
