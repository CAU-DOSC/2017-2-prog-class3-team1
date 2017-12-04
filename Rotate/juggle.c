int gcd(int a, int b)
{
	int k, g = 1;

	k = (a < b) ? a : b;
	for (int i = 2; i <= k; i++)
	{
		if (a%i == 0 && b%i == 0)
			g = i;
	}
	return g;

}
void leftRotate(char arr[], int d, int n)
{
	int i, j, k, p;
	int s;
	char temp;
	if (d < 0)
		p = gcd(-d, n);
	else
		p = gcd(d, n);

	if (d > 0)
	{
		for (i = 0; i < p; i++)
		{

			temp = arr[i];
			j = i;
			while (1)
			{
				k = j + d;
				if (k >= n)
					k = k - n;
				if (k == i)
					break;
				arr[j] = arr[k];
				j = k;
			}
			arr[j] = temp;
		}
	}
	else
	{
		d = -d;
		for (i = 0; i < p; i++)
		{
			k = i;

			while (k < n)
			{
				k += d;
			}
			k -= d;
			j = k;
			s = k;
			temp = arr[j];
			while (1)
			{
				k -= d;
				if (k < 0)
					k += n;
				if (k == j)
					break;
				arr[s] = arr[k];
				s = k;
			}
			arr[s] = temp;
		}
	}
}
