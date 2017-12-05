
void Swap(char arr[], int a, int b, int d)
{
	for (int i = 0; i < d; ++i)
	{
		char temp = arr[a + i];
		arr[a + i] = arr[b + i];
		arr[b + i] = temp;
	}
}

void Block_Swap(char arr[], int n, int d)
{
	int temp = 0, left_d = 0, temp_d = 0;
	if (d == 0 || d == n)
	{
		return;
	}
	else if (d < 0)
	{
		left_d = -d;
		int size1 = left_d;
		int size2 = n - left_d;
		while (size1 != size2)
		{
			if (size1 < size2)
			{
				Swap(arr, left_d - size1, left_d + size2 - size1, size1);
				size2 -= size1;
			}
			else
			{
				Swap(arr, left_d - size1, left_d, size2);
				size1 -= size2;
			}
		}
		Swap(arr, left_d - size1, left_d, size1);
	}
	else
	{
		temp_d = (n - d);
		int size1 = temp_d;
		int size2 = n - temp_d;
		while (size1 != size2)
		{
			if (size1 < size2)
			{
				Swap(arr, temp_d - size1, temp_d + size2 - size1, size1);
				size2 -= size1;
			}
			else
			{
				Swap(arr, temp_d - size1, temp_d, size2);
				size1 -= size2;
			}
		}
		Swap(arr, temp_d - size1, temp_d, size1);
	}
}

