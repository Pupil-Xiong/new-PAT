#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct 
{
	string name;
	int price;
	int num;
	long int sum;
}paper;

bool cmp(paper a,paper b)
{
	return a.num>b.num;
}

bool cmp1(paper a,paper b)
{
	return a.sum>b.sum;
}

int main()
{

	int n=0;
	cin>>n;
	paper p[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>p[i].name>>p[i].price>>p[i].num;
		p[i].sum=p[i].price*p[i].num;
	}	
	sort(p,p+n,cmp);
	cout<<p[0].name<<' '<<p[0].num<<endl;
	sort(p,p+n,cmp1);
	cout<<p[0].name<<' '<<p[0].sum;
	return 0;
}