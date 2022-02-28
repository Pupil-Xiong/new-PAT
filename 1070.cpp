#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n=0,i=0,temp=0,sum=0;
	multiset<int> s;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>temp;
		s.insert(temp);
	}
	for(multiset<int>::iterator it=s.begin();it!=s.end();it++)
	{
		if(sum==0)
			sum+=*it;
		else
			sum=(sum+*it)/2;
	}
	cout<<sum;
	return 0;
}