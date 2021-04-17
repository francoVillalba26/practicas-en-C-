#include <iostream>
using namespace std;

int main()
{
	int vel = 55;
	float time = 2.5;
	float dist = vel*time;
	
	cout << "Dada una velocidad de 55 millas por hora"
	     << "\ny un tiempo transcurrido de 2.5 horas"
	     << "\nLa distancia recorrida por un objeto es " << dist
	     << " millas" << endl;
	     
	return 0;
}
