#include <stdio.h>
#include <stdbool.h>


char feld[3][3];


bool voll()
{
	for(int x = 0; x < 2; x++)
	{
		for(int y = 0; y < 2; y++)
		{
			if(feld[x][y] == ' ')
			{
				return false;
			}
		}
	}
	return true;
}

int KI()
{
	int x = 0 , y = 0;
	if(feld[1][1] == ' ')
	{
		feld[1][1] = 'O';
		return 0;
	}
	for (x; x < 2; x++) 
	{
		if (feld[x][y] == ' ')
		{
			feld[x][y] == 'O';
			return 0;
		}
		y++;
	}
	y = 0;
	for (x; x > 0; x--) 
	{
		if (feld[x][y] == ' ')
		{
			feld[x][y] = 'O';
			return 0;
		}
		y++;
	}
	for (x = 0; x < 2; x++) 
	{
		for (y = 0; y < 2; y++) 
		{
			if (feld[x][y] == ' ')
			{
				feld[x][y] == 'O';
				return 0;
			}
		}
	}
}

void zeichnen()
{
	printf("|%c|%c|%c|\n-------\n|%c|%c|%c|\n-------\n|%c|%c|%c|\n",feld[0][0], feld[1][0], feld[2][0],feld[0][1], feld[1][1], feld[2][1],feld[0][2], feld[1][2], feld[2][2]);
}

bool sieg(char test)
{
	bool beobachter = false;
	// 
	int x, y = 0;
	// 
	for (x = 0; x < 2; x++) 
	{
		// 
		if (feld[x][y] == test)
		{
			// 
			beobachter = true;
		}
		else
		{
			// 
			x = 2;
			// 
			beobachter = false;
		}
		y++;
	}
	// 
	if (beobachter)
	{
		// 
		return beobachter;
	}
	else
	{
		y = 0;
		for (x = 2; x > 0; x--) 
		{
			if (feld[x][y] == test)
			{
				beobachter = true;
			}
			else
			{
				x = 2;
				beobachter = false;
			}
			y++;
		}
		// 
		if (beobachter)
		{
			return beobachter;
		}
		else
		{
			// 
			for (x = 0; x < 2; x++) 
			{
				// 
				for (y = 0; y > 0; y--) 
				{
					if (feld[x][y] == test)
					{
						beobachter = true;
					}
					else
					{
						// 
						y = 0;
						beobachter = false;
					}
				}
				// 
				if (beobachter)
				{
					// 
					return beobachter;
				}
			}
			if (beobachter)
			{
				return beobachter;
			}
			else
			{
				// 
				for (y = 0; y < 2; y++) 
				{
					// 
					for (x = 0; x > 0; x--) 
					{
						if (feld[x][y] == test)
						{
							beobachter = true;
						}
						else
						{
							// 
							x = 0;
							beobachter = false;
						}
					}
					if (beobachter)
					{
						return beobachter;
					}
				}
			}
		}
	}
	// 
	return beobachter;
}

int main()
{
	char befehl[5];
	int x, y;
	bool eingabe = true;
	for (int k = 0; k < 3; k++) 
	{
		for (int l = 0; l < 3; l++) 
		{
			feld[k][l] = ' ';
		}
	}
	printf("Wollen Sie gegen einen richtigen Spieler antreten?(y/N)");
	scanf("%s", &befehl);
	while (true)
	{
		do
		{
			zeichnen(feld);
			printf("Spieler 1:\nIn welcher Spalte willst du dein Kreuz setzen?");
			scanf("%i", &y);
			printf("In welcher Zeile wollen Sie ihr Kreuz setzen");
			scanf("%i", &x);
			if (feld[x][y] == ' ')
			{
				feld[x][y] = 'X';
				eingabe = false;
			}
		} while (eingabe);
		eingabe = false;
		if (sieg('X'))
		{
			printf("Spieler 1 hat gewonnen!");
			return 0;
		}
		if (voll())
		{
			printf("Unentschieden!");
			return 0;
		}
		if (befehl[0] == 'y')
		{
			do
			{
				zeichnen();
				printf("Spieler 1:\nIn welcher Spalte willst du dein Kreis setzen?");
				scanf("%i", &y);
				printf("In welcher Zeile wollen Sie ihr Kreis setzen?");
				scanf("%i", &x);
				if (feld[x][y] == ' ')
				{
					feld[x][y] = 'X';
					eingabe = false;
				}
			} while (eingabe);
			eingabe = true;
		}
		else
		{
			KI();
		}
		if (sieg('O'))
		{
			printf("Spieler 2 hat gewonnen!");
			return 0;
		}
	}
}
