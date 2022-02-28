#include <iostream>
#include <string>
using namespace std;

typedef struct 
{
	string id;
	int test;
	int exam;
}person;
int main()
{
	int n=0,i=0,j=0,m=0;
	person p[1000];
	int search;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
		cin>>p[i].id>>p[i].test>>p[i].exam;
	cin>>m;
	getchar();
	for(i=0;i<m;i++)
	{
		cin>>search;
		for(j=0;j<n;j++)
		{
			if(p[j].test==search)
			{
				cout<<p[j].id<<' '<<p[j].exam;
				if(i!=m-1)
					cout<<endl;
				break;
			}
		}
	}
	return 0;
}