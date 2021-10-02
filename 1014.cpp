#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[4];
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i=0,j=0;
	int flag=0;
	int a[2];
	int b=0;
	for(i=0;i<4;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<60;i++)
	{
		if(s[0][i]==s[1][i])
			if(s[0][i]>='A'&&s[0][i]<='G')
			{
				a[j]=s[1][i]-'A';
				j++;
				break;
			}
	}
	i++;
	for(i;i<60;i++)
	{
		if(s[0][i]==s[1][i])
		{
			if(s[0][i]>='0'&&s[0][i]<='9')
			{
				a[j]=s[0][i]-'0';			
				break;
			}
			else if(s[0][i]>='A'&&s[0][i]<='N')
			{
				a[j]=s[0][i]-'A'+10;			
				break;
			}
		}
	}
	for(i=0;i<60;i++)
	{
		if(s[2][i]==s[3][i])
			if((s[2][i]>='A'&&s[2][i]<='Z')||(s[2][i]>='a'&&s[2][i]<='z'))
				{
					b=i;
					break;
				}
	}
	cout<<week[a[0]]<<" ";
	printf("%02d:",a[1]);
	printf("%02d",i);
	return 0;
}
