#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i=0,j=0;
	char jud;
	string s;
	cin>>jud;
	getchar();
	getline(cin,s);
	if(jud=='C')
	{
		for(i=0;i<s.length();i++)
		{
			char c=s[i];
			int num=1;
			while(c==s[i+1])
			{
				i++;
				num++;
			}
			if(num!=1)
				cout<<num;
			cout<<c;
		}
	}
	else if(jud=='D')
	{
		for(i=0;i<s.length();i++)
		{
			int x=0;
			while(s[i]>='0'&&s[i]<='9')
			{
				x=x*10+(s[i]-'0');
				i++;
			}
			if(x==0)
			{
				x++;
			}
			for(j=0;j<x;j++)
			{
				cout<<s[i];
			}
		}
	}
	return 0;
}