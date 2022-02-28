#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main()
{
	string a,b;
	int i=0,j=0;
	int c[37]={0};
	cin>>a;
	getchar();
	cin>>b;
	for(i=0;i<a.length();i++)
	{
		if(a[i]==b[j])
		{
			j++;
			continue;
		}
		else if(a[i]>='a'&&a[i]<='z'&&c[a[i]-'a']!=1)
		{
			cout<<char(a[i]-'a'+'A');   //printf试试
			c[a[i]-'a']=1;
		}
		else if(a[i]>='A'&&a[i]<='Z'&&c[a[i]-'A']!=1)
		{
			cout<<a[i];   
			c[a[i]-'A']=1;
		}
		else if(a[i]>='0'&&a[i]<='9'&&c[a[i]-'0'+26]!=1)
		{
			cout<<a[i];
			c[a[i]-'0'+26]=1;
		}
		else if(a[i]=='_'&&c[36]!=1)
		{
			cout<<'_';
			c[36]=1;
		}
	}
	return 0;
}