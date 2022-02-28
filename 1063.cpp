#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
	set<double,greater<double>> s;
	int n=0,i=0;
	int a=0,b=0;
	double sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>a>>b;
		sum=sqrt(pow(a,2)+pow(b,2));
		s.insert(sum);
	}
	set<double,greater<double>>::iterator it=s.begin();
	printf("%.2f",*it);
	return 0;
}