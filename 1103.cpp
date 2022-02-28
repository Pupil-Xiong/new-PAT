#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int m=0,n=0,i=0,j=0;
	int sum1=0,sum2=0;
	cin>>m>>n;
	int count=0;
	for(i=m;i<=n;i++)
	{
		sum1=pow(i,3)-pow(i-1,3);
		if(pow(sqrt(sum1),2)!=sum1)
			continue;
		for(j=i;j>0;j--)
		{
			sum2=pow(j,2)+pow(j-1,2);
			if(sqrt(sum1)==sum2)
			{
				cout<<i<<' '<<j<<endl;
				count++;
			}
		}
	}
	if(count==0)
		cout<<"No Solution";
	return 0;
}