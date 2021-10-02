#include <iostream>
using namespace std;

int main()
{
	int a[10] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	if (a[0] != 0)
	{
		for (i = 1; i < 10; i++)
		{
			if (a[i] != 0)
			{
				cout << i;
				a[i]--;
				break;
			}
		}
	}
	for (j = 0; j < 10; j++)
	{
		while (a[j] != 0)
		{
			cout << j;
			a[j]--;
		}
	}
	return 0;
}