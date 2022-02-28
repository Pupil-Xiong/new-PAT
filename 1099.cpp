#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool sushu(int a)
{
	int i=0;
	if(a<=1)    //注意不要漏了1和小于0的判断
		return 0;
	else if(a==2)
		return 1;
	int q=sqrt(a);
	for(i=2;i<=q;i++)
		if(a%i==0)
			return 0;
	return 1;
}

int main()
{
	int n=0,n1=0;
	cin>>n;
	int temp=n;
	int count=0;
	while(count==0)
	{
		int flag=0,flag1=0;
		flag=sushu(temp);
		if(flag==1)
		{
			n1=temp-6;
			flag1=sushu(n1);
			if(flag1==0)
			{
				n1=temp+6;
				flag1=sushu(n1);
				if(flag1==1)
				{
					if(temp==n)
					{
						cout<<"Yes"<<endl;
						cout<<n1;
					}
					else
					{
						cout<<"No"<<endl;
						cout<<temp;
					}
					count=1;
					return 0;
				}
			}
			else
			{
				if(temp==n)
				{
					cout<<"Yes"<<endl;
					cout<<n1;
				}
				else
				{
					cout<<"No"<<endl;
					cout<<temp;
				}
				count=1;
				return 0;
			}
		}
		temp++;
	}
	return 0;
}