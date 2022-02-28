#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string s[100];
	int n=0;
	int i=0,j=0;
	int num=0;
	double sum=0;
	double aver=0;
	double x=0;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		int flag=0;
		int count=0;
		x=0;
		if((s[i][0]<'0'||s[i][0]>'9')&&s[i][0]!='-')
		{
			cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
			continue;
		}
		else if(s[i][0]!='-')
		{
			x=s[i][0]-'0';
			if(s[i].length()==1)
			{
				num++;
				sum+=x;
				continue;
			}
		}
		for(j=1;j<s[i].length();j++)
		{
			if(s[i][j]=='.')
			{
				flag++;
				if(flag>1)
				{
					cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
					break;
				}
				if(j==s[i].length()-1)
				{
					num++;
					sum+=x;
					break;
				}
				continue;
			}
			else if(s[i][j]>='0'&&s[i][j]<='9')
			{
				if(flag==0)
					x=x*10+(s[i][j]-'0');
				else if(flag==1)
				{
					count--;
					if(count==-3)
					{
						cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
					    break;
					}
					x+=(s[i][j]-'0')*pow(10,count);
				}
			}
			else
			{
				cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
				break;
			}
			if(j==s[i].length()-1)
			{
				if(x>1000)
				{
					cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
					break;
				}
				num++;
				if(s[i][0]=='-')
					sum+=-x;
				else
					sum+=x;
			}
		}
	}
	if(num!=0)
	{
		aver=sum/num;
		if(num==1)
			printf("The average of %d number is %.2lf",num,aver);
		else if(num>1)
			printf("The average of %d numbers is %.2lf",num,aver);
	}
	else
		printf("The average of 0 numbers is Undefined");
	return 0;
}