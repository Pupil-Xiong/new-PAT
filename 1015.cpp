#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct person
{
	int admin,de,cai;
}person;

person stu;
std::vector<person> t[4];

bool cmp(person a,person b)
{
	if((a.de+a.cai)!=(b.de+b.cai))
		return (a.de+a.cai)>(b.de+b.cai);
	else if(a.de!=b.de)
		return a.de>b.de;
	else
		return a.admin<b.admin;
}

int main()
{
	int n=0,l=0,h=0;
	int m=0;
	int i=0,j=0,k=0;
	int count=0;

	cin>>n>>l>>h;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>stu.admin>>stu.de>>stu.cai;
		if(stu.de>=l&&stu.cai>=l)
		{
			if(stu.de>=h&&stu.cai>=h)
				t[0].push_back(stu);
			else if(stu.de>=h&&stu.cai<h)
				t[1].push_back(stu);	
			else if(stu.de<h&&stu.cai<h&&stu.de>=stu.cai)
				t[2].push_back(stu);
			else
				t[3].push_back(stu);
			count++;
		}
		if(i!=n-1)
			getchar(); 
	}
	cout<<count<<endl;
	for(j=0;j<4;j++)
	{
		sort(t[j].begin(),t[j].end(),cmp);
		for(k=0;k<t[j].size();k++)
		cout<<t[j][k].admin<<' '<<t[j][k].de<<' '<<t[j][k].cai<<endl;
	}
	return 0;
}