// Ermoeglicht, dass die Funktionen der stdio (Standard Input Output) Library
// in diesem File zur Verfuegung stehen
#include <stdio.h>

// Die main Funktion ist der Einstiegspunkt des Programms,
// hier beginnt das Programm und laeuft schrittweise von oben nach unten durch.
// Durch das int vor dem Namen der Funktion, hier "main",
// muss diese Funktion mit einer ganzen Zahl beendet werden.
int main()
{
	// Aufruf der printf Funktion aus der stdio library.
	// Es wird eine Zeichenkette auf die Konsole ausgegeben.
	printf("Hello World!");

	// Aufgrund des int vor der Main-Funktion muss 
	// der Block mit einer ganzen Zahl beendet werden.
	// return steht für das Zurückkehren aus dieser Funktion,
	// in diesem Fall beenden des Programmes
	// Dieses Statement signalisiert durch die 0,
	// dass das Programm ohne Fehler beendet wurde.
	return 0;
}