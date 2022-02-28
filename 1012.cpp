#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

	int m=0,n=0;
	int a1=0,b1=0,d1=0;
	float c1=0;
	int b2=1;
	int sum1=0,sum2=0,sum3=0;
	float aver=0;
	int count=0;
	int max=0;
	int i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		switch(m%5)
		{
			case 0:if(m%2==0){sum1+=m;}break;
			case 1:sum2+=b2*m;b2*=(-1);b1++;break;
			case 2:count++;break;
			case 3:sum3+=m;c1++;break;
			case 4:max=max>m?max:m;d1++;break;
		}
	}
	if(sum1==0)
	{
		cout<<'N'<<" ";
	}
	else
	{
		cout<<sum1<<" ";
	}
	if(b1==0)
	{
		cout<<'N'<<" ";
	}
	else
	{
		cout<<sum2<<' ';
	}
	if(count==0)
	{
		cout<<'N'<<" ";
	}
	else
	{
		cout<<count<<' ';
	}
	if(c1==0)
	{
		cout<<'N'<<' ';
	}
	else
	{
		aver=sum3/c1;
		printf("%.1f ",aver);
	}
	if(d1==0)
	{
		cout<<'N';
	}
	else
	{
		cout<<max;
	}

	return 0;
}