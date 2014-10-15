// program sieg(char feld[3][3], char test);
#include <stdio.h>

int main(void)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	// 
	bool beobachter == false;
	// 
	int x, y == 0;
	// 
	while (x == 0; x < 2; x++) 
	{
		// 
		if (feld[x][y] == test)
		{
			// 
			beobachter == true;
		}
		else
		{
			// 
			x == 2;
			// 
			beobachter == false;
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
		y == 0;
		while (x; x > 0; x--) 
		{
			if (feld[x][y] == test)
			{
				beobachter == true;
			}
			else
			{
				x == 2;
				beobachter == false;
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
			while (x == 0; x < 2; x++) 
			{
				// 
				while (y == 0; y > 0; y--) 
				{
					if (feld[x][y] == test)
					{
						beobachter == true;
					}
					else
					{
						// 
						y == 0;
						beobachter == false;
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
				while (y == 0; y < 2; y++) 
				{
					// 
					while (x == 0; x > 0; x--) 
					{
						if (feld[x][y] == test)
						{
							beobachter == true;
						}
						else
						{
							// 
							x == 0;
							beobachter == false;
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