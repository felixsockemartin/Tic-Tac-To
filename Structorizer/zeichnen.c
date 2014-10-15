// program zeichnen(char feld[3][3]);
#include <stdio.h>

int main(void)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	printf("|%c|%c|%c|\n
	-------\n
	|%c|%c|%c|\n
	-------\n
	|%c|%c|%c|\n",
	feld[0][0], feld[1][0], feld[2][0],
	feld[0][1], feld[1][1], feld[2][1],
	feld[0][2], feld[1][2], feld[2][2]);
	
	return 0;
}