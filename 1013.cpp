#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int m=0,n=0,flag=0,i,x=2,num=10;
	int temp=0;
	cin>>m>>n;
	while(flag!=n)
	{
		if(num==0)
		{
			cout<<endl;
			num=10;
		}
		if(x==2||x==3)
		{
			flag++;
			if(flag>=m)
			{
				cout<<x;
				num--;
				if(num!=0&&flag!=n)
					cout<<' ';
			}
			x++;
			continue;
		}
		temp=sqrt(x);
		for(i=2;i<=temp;i++)
		{
			if(x%i==0)
			{
				x++;
				break;
			}
			else if(i==temp)
			{
				flag++;
				if(flag>=m)
				{
					cout<<x;
					num--;
					if(num!=0&&flag!=n)
						cout<<' ';	
				}
				x++;
			}
		}
	}
	return 0;
}