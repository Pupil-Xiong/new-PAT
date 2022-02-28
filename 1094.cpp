#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int i=0,j=0,k=0,ii=0;
	int x=0;
	int num=0;
	int flag=0;
	string s;
	cin>>num>>k;
	getchar();
	cin>>s;
	while(flag==0)
	{
		x=0;
		for(i=ii;i<ii+k;i++)
			x=x*10+(s[i]-'0');
		if(x==2)    //0001不是，0002是素数
		{
			for(j=ii;j<ii+k;j++)
				cout<<s[j];
			break;
		}
		else if((s[ii+k-1]-'0')%2==0||x==1)
		{
			flag=0;
			ii++;
			continue;
		}
		int q=sqrt(x);
		for(i=2;i<=q;i++)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}
			else if(i==q)
			{
				flag=1;
				for(j=ii;j<ii+k;j++)
					cout<<s[j];
				break;
			}
		}
		ii++;
		if((ii+k-1)>=num)
		{
			cout<<"404";
			break;
		}
	}
	return 0;
}