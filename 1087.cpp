#include <iostream>
#include <set>
using namespace std;
int main()
{
	int i=0,j=0,n=0,sum=0,count=0;
	set<int> s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=i/2+i/3+i/5;
		s.insert(sum);
	}
	cout<<s.size();
	return 0;
}