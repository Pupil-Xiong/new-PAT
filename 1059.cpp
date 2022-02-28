#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool jud(int a)
{
	int i=0,temp=sqrt(a);
	if(a<=1)
		return 0;
	else if(a==2)
		return 1;
	else
	{
		temp=sqrt(a);
		for(i=2;i<=temp;i++)
			if(a%i==0)
				return 0;
	}
	return 1;
}

int main()
{
	int n=0,k=0,i=0,j=0;
	int a[10001],b[10001],flag[10001]={0};
	cin>>n;
	getchar();
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		getchar();
	}
	cin>>k;
	for(i=1;i<=k;i++)
	{
		getchar();
		cin>>b[i];
		for(j=1;j<=n;j++)   //逐个比较
		{
			if(b[i]==a[j])
			{
				if(j==1)
				{
					if(flag[j]==0) printf("%04d: Mystery Award\n",b[i]);
					else printf("%04d: Checked\n",b[i]);

				}
				else if(jud(j))
				{
					if(flag[j]==0) printf("%04d: Minion\n",b[i]);
					else printf("%04d: Checked\n",b[i]);
				}
				else
				{
					if(flag[j]==0) printf("%04d: Chocolate\n",b[i]);
					else printf("%04d: Checked\n",b[i]);
				}
				flag[j]++;
				break;
			}
			if(j==n) printf("%04d: Are you kidding?\n",b[i]);
		}
	}
	return 0;
}