#include <iostream>
using namespace std;

int ascii(char letra)
{
	int valorASCII = letra;
	
	return valorASCII;
}

int main()
{
	int a = ascii('a');
	int b = ascii('b');
	int g = ascii('g');
	int m = ascii('m');
	int A = ascii('A');
	int G = ascii('G');
		
	cout<< "El caracter que resulta de m - 5 segun el codigo ASCII es " << char(m-5) << endl
     	<< "El caracter que resulta de m + 5 segun el codigo ASCII es " << char(m+5) << endl
     	<< "El caracter que resulta de G + 6 segun el codigo ASCII es " << char(G+6) << endl
     	<< "El caracter que resulta de G - 6 segun el codigo ASCII es " << char(G-6) << endl
     	<< "El caracter que resulta de b - a segun el codigo ASCII es " << char(b-a) << endl
     	<< "El caracter que resulta de g - a + 1 segun el codigo ASCII es " << char((g-a)+1) << endl
     	<< "El caracter que resulta de G - A + 1 segun el codigo ASCII es " << char((G-A)+1) << endl;
	
	return 0;
}

