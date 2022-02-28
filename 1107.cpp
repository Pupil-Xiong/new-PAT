#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n=0,m=0;
	set<int,greater<int>> s[100];
	set<int,greater<int>> s1;
	int temp=0;
	cin>>n>>m;
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			getchar();
			cin>>temp;
			s[i].insert(temp);
		}
		set<int>::iterator it=s[i].begin();
		cout<<*it;
		if(i!=n-1)
			cout<<' ';
		s1.insert(*it);
	}
	set<int>::iterator it1=s1.begin();
	cout<<endl<<*it1;
	return 0;
}