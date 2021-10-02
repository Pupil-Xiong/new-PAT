#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

typedef struct {
	string a[5];
	int year, month, day;
}people;

int fla(people a1) {
	int flag=0;
	if (a1.year >= 1814 && a1.month >= 9 && a1.day > 6)
	{
		flag = 1;
	}
	return flag;
}

int cmp(people a1,people a2) {
	if (a1.year > a2.year)  //a1小
		return 0;
	else if (a1.year < a2.year)
		return 1;
	else if (a1.month > a2.month)  //a1小
		return 0;
	else if (a1.month < a2.month)
		return 1;
	else if (a1.day > a2.day)
		return 0;
	else if (a1.day < a2.day)
		return 1;
}

int main()
{
	int n, i = 0;
	int k = 0;
	int vs=0;
	scanf_s("%d", &n);
	people max, min;
	min.year = 1814; min.month = 9; min.day = 6;   //年龄最小
	max.year = 2014; max.month = 9; max.day = 6;
	vector<people> x;
	for (i = 0; i < n; i++)
	{
		scanf_s("%s", &x[i].a);
		scanf_s("%d/%d/%d",&x[i].year, &x[i].month, &x[i].day);
		if (fla(x[i]) == 0)
			k++;
		if (fla(x[i]) == 1)
		{
			if (cmp(x[i], min) == 0)
				min = x[i];
			else if (cmp(x[i], min) == 1)
				max = x[i];
		}
	}
	cout << k << " " << max.a << " " << min.a;
		return 0;
}