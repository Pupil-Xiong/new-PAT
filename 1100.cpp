#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct
{
	int yy;
	int mm;
	int dd;
	// string yy1;
	// string mm1;
	// string dd1;
}old;

old max(old a,old c)
{
	if(a.yy>c.yy)
		return c;
	else if(a.yy==c.yy)
	{
		if(a.mm>c.mm)
			return c;
		else if(a.mm==c.mm)
		{
			if(a.dd>c.dd)
				return c;
			else
				return a;
		}
		else
			return a;
	}
	else 
		return a;
}

int main()
{
	vector<string> s1;
	vector<string> s2;
	vector<string> s3;
	old p[100]={0};
	int n=0,m=0;
	int i=0,j=0;
	int k=0;
	old x={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>s1[i];
	}
	getchar();
	cin>>m;
	for(i=0;i<m;i++)
	{
		getchar();
		cin>>s2[i];
		for(j=0;j<n;j++)
		{
			if(s2[i]==s1[j])
			{
				s3[i]=s2[i];
				break;
			}
		}
	}
	cout<<s3.size()<<endl;
	if(s3.size()==0)
	{
		for(i=0;i<m;i++)
		{
			p[i].yy1=s2[i].substr(6,4);
			p[i].mm1=s2[i].substr(10,2);
			p[i].dd1=s2[i].substr(12,2);
			for(j=0;j<4;j++)
				p[i].yy=p[i].yy*10+(p[i].yy1[j]-'0');
			for(j=0;j<2;j++)
			{
				p[i].mm=p[i].mm*10+(p[i].mm1[j]-'0');
				p[i].dd=p[i].dd*10+(p[i].dd1[j]-'0');
			}
			if((x.yy!=max(p[i],x).yy)&&(x.mm!=max(p[i],x).mm)&&(x.dd!=max(p[i],x).dd))
			{
				k=i;
				x=max(p[i],x);
			}	
		}
		cout<<s2[i];
	}
	else
	{
		for(i=0;i<s3.size();i++)
		{
			p[i].yy1=s3[i].substr(6,4);
			p[i].mm1=s3[i].substr(10,2);
			p[i].dd1=s3[i].substr(12,2);
			for(j=0;j<4;j++)
				p[i].yy=p[i].yy*10+(p[i].yy1[j]-'0');
			for(j=0;j<2;j++)
			{
				p[i].mm=p[i].mm*10+(p[i].mm1[j]-'0');
				p[i].dd=p[i].dd*10+(p[i].dd1[j]-'0');
			}
			if((x.yy!=max(p[i],x).yy)&&(x.mm!=max(p[i],x).mm)&&(x.dd!=max(p[i],x).dd))
			{
				k=i;
				x=max(p[i],x);
			}	
		}
		cout<<s3[i];
	}
	return 0;
}