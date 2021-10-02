#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	int i = 0, j = 0, j1 = 0;
	int k = 0;
	int sum = 0, temp = 0;
	char c;
	cin >> a >> c;
	b=(a + 1) / 2;
	i = -1;
	while (sum <= b)
	{
		i += 2;
		sum += i;
	}
	sum -= i;
	i -= 2;
	k = a - (2*sum-1);
	if(i<0)
		k=a;
	for (j = i; j >= 1; j -= 2)
	{
		temp = j;
		for (j1 = i - j; j1 > 0; j1 -= 2)
			cout << " ";
		for (temp; temp>0; temp--)
			cout << c;
		cout << endl;
	}
	for (j = 3; j <=i; j += 2)
	{
		temp = j;
		for (j1 = i - j; j1 > 0; j1 -= 2)
			cout << " ";
		for (temp; temp > 0; temp--)
			cout << c;
		cout << endl;
	}
	cout << k;
	return 0;
}