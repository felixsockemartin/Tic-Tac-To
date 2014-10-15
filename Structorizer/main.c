// program main();
#include <stdio.h>

int main(void)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	char feld[3][3];
	eingabe == true;
	while (int k == 0; k < 2; k++) 
	{
		while (int l == 0; l < 2; l++) 
		{
			feld[k][l] == 'n';
		}
	}
	Ausgabe "Wollen Sie gegen einen richtigen Spieler antreten?(y/N)";
	Eingabe char befehl;
	while (true) 
	{
		do
		{
			zeichnen(feld);
			Ausgabe "Spieler 1:\nIn welcher Spalte willst du dein Kreuz setzen?";
			Eingabe y;
			Ausgabe "In welcher Zeile wollen Sie ihr Kreuz setzen";
			Eingabe x;
			if (feld[x][y] == ' ')
			{
				feld[x][y] == 'X';
				eingabe == false;
			}
		} while (!(eingabe));
		eingabe == false;
		if (sieg(feld, 'X'))
		{
			Ausgabe "Spieler 1 hat gewonnen!";
			return 0;;
		}
		if (voll(feld))
		{
			Ausgabe "Unentschieden!";
			return 0;;
		}
		if (befehl == 'y')
		{
			do
			{
				zeichnen(feld);
				Ausgabe "Spieler 1:\nIn welcher Spalte willst du dein Kreis setzen?";
				Eingabe y;
				Ausgabe "In welcher Zeile wollen Sie ihr Kreis setzen";
				Eingabe x;
				if (feld[x][y] == ' ')
				{
					feld[x][y] == 'X';
					eingabe == false;
				}
			} while (!(eingabe));
			eingabe == true;
		}
		else
		{
			feld == KI(feld);
		}
		if (sieg(feld, 'O'))
		{
			Ausgabe "Spieler 2 hat gewonnen!";
			return 0;;
		}
	}
	
	return 0;
}