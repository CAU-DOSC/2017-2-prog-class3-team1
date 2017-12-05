
void Swap(char arr[], int a, int b, int d)
{
	char temp;
	for (int i = 0; i < d; ++i)
	{
		temp = arr[a + i];
		arr[a + i] = arr[b + i];
		arr[b + i] = temp;
	}
}

char* Blockswap(char arr[], int d, int n)
{
	if (d == 0 || d == n)
		return arr;


	if (n - d == d)
	{
		Swap(arr, 0, n - d, d);
		return arr;
	}


	if (d < n - d)
	{
		Swap(arr, 0, n - d, d);
		Blockswap(arr, d, n - d);
	}
	else
	{
		Swap(arr, 0, d, n - d);
		Blockswap(arr + n - d, 2 * d - n, d);
	}
	return arr;
}

