// Standard input output, Library für die Konsolenausgabe
#include <stdio.h>

// Einstiegspunkt des Programms
int main()
{
	// Ganze Zahlen von -2147483648 bis 2147483647
	int a = 1, b = 2;

	// Gleitkommazahlen von 1,2E-38 bis 3,4E+38
	float c = 1.5;

	// Gleitkommazahlen von 2,3E-308 bis 1,7E+308
	double d = 2.5;

	// Ein Zeichen
	char e = 'A';

	// Ausgabe von der Variable a und b, %d steht für int
	printf("Variable a: %d, Variable b: %d\n", a, b);

	// Ausgabe von der Variable c, d und e,
	// %f steht für float und double %c für char
	printf("Variable c: %f, Variable d: %f, Variable e: %c", c, d, e);

	// Programm beenden
	return 0;
}