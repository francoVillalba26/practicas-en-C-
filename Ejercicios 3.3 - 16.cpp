#include <iostream>
using namespace std;

int main()
{
	int WEIGHT, w100, w50, w10, w5, w1; 
	
	WEIGHT = 626;
	
	// Determina la cantidad de pesas de 100 libras
	w100 = int(WEIGHT/100);
	
	// Determina la cantidad de pesas de 50 libras
	w50 = int((WEIGHT-(w100*100))/50);
	
	// Determina la cantidad de pesas de 10 libras
	w10 = int((WEIGHT-(w100*100)-(w50*50))/10);
	
	// Determina la cantidad de pesas de 5 libras
	w5 = int((WEIGHT-(w100*100)-(w50*50)-(w10*10))/5);
	
	// Determina la cantidad de pesas de 1 libras
	w1 = int(WEIGHT-(w100*100)-(w50*50)-(w10*10)-(w5*5));
	
	cout << "Para un peso de " << WEIGHT << " libras se requieren:" << endl
	     << "--> " << w100 << " pesas de 100 libras." << endl
		 << "--> " << w50 << " pesas de 50 libras." << endl
		 << "--> " << w10 << " pesas de 10 libras." << endl
		 << "--> " << w5 << " pesas de 5 libras." << endl
		 << "--> " << w1 << " pesas de 1 libra." << endl;
	
	return 0; 
}
