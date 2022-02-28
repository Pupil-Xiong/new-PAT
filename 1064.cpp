#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n=0;
	int sum=0;
	int m=0;
	int count=0;
	cin>>n;
	getchar();
	set<int> s;
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>m;
		while(m!=0)
		{
			sum+=m%10;
			m/=10;
		}
		s.insert(sum);
		sum=0;
	}
	cout<<s.size()<<endl;
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it;
		count++;
		if(count!=s.size())
		cout<<' ';
	}
	return 0;
}