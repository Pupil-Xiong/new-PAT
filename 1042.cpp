#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sum[30]={0};
	int i=0,j=0;
	int max=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c>='a'&&c<='z')
		{
			sum[c-'a']++;
			if(sum[c-'a']>max)
			{
				max=sum[c-'a'];
			}
		}
		else if(c>='A'&&c<='Z')
		{
			sum[c-'A']++;
			if(sum[c-'A']>max)
			{
				max=sum[c-'A'];
			}
		}
		c=getchar();
	}

	for(i=0;i<30;i++)
	{
		if(sum[i]==max)
		{
			cout<<char(i+'a')<<' '<<max;
			break;
		}
	}
	return 0;
}