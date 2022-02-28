#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n=0;
	int i=0,j=0;
	int h=0;
	int sum=0;
	cin>>n;
	int a[10];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j++)
	{
		h=n-j-1;
		for(int k=j+1;k<n;k++)
		{
			sum+=a[j]*10+a[k];
		}
		for(int m=h-1;m>=0;m--)
		{
			sum+=a[h]*10+a[m];
		}
	}
	cout<<sum;
	return 0;
}