#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int b[1000] = { 0 };
	int i = 0, j = 0;
	int max = 0;
	for (i = 0; i < a.length(); i++)
	{
		j = a[i]-'0';
		b[j]++;
		if (j > max)
		{
			max = j;
		}
	}
	for (i = 0; i <=max; i++)
	{
		if (b[i] != 0)
		{
			cout << i << ":" << b[i] ;
			if (i != max)
			{
				cout << endl;
			}
		}
	}
	return 0;
}