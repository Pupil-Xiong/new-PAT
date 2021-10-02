#include <iostream>
#include <string>
using namespace std;
int main() {
	int a = 0, b = 0;
	int c = 0;
	cin >> a >> b;
	c = a + b;
	if (c < 0)
		cout << '-';
	string i=to_string(abs(c));
	int d, j = 0;
	d = i.length() % 3;
	for (j = 0; j < i.length(); j++)
	{
		if (j!=0&&j%3==d)
		{
			cout << ",";
		}
		cout << i[j];
	}
	return 0;
}