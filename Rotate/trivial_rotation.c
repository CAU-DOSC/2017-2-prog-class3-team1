#include "Rotate.h"

void trivialrotation(char *input, int d, int n)
{
	char temp = 0;
	if (d > 0)
	{
		for (int i = d; i > 0; i--)
		{
			temp = input[0];
			for (int j = 0; j < n - 1; j++)
				input[j] = input[j + 1];
			input[n - 1] = temp;
		}
	}
	else
	{
		d = (-d);
		for (int i = d; i > 0; i--)
		{
			temp = input[n - 1];
			for (int j = n - 1; j > 0; j--)
				input[j] = input[j - 1];
			input[0] = temp;
		}
	}
}
