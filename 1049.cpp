#include <iostream>
using namespace std;

int main()
{
	int n=0;
	long long sum=0.0;
	double temp=0.0;
	cin>>n;
	getchar();
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		sum+=(long long)(temp*1000)*i*(n-i+1);
	}
	printf("%.2f",sum/1000.0);
	return 0;
}