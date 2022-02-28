#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n=0,i=0,j=0,count=0,max=-1,flag=0;
	cin>>n;
	vector<long long int> v(n),v1,v2;
	for(i=0;i<n;i++)
		cin>>v[i];
	v1=v;
	sort(v1.begin(),v1.end());
	for(i=0;i<n;i++)
	{
		if(v[i]>max) max=v[i];
		if(v[i]==v1[i]&&max==v[i])
		{
			count++;
			v2.push_back(v[i]);
		}
	}
		cout<<count<<endl;
	for(i=0;i<count;i++)
	{
		if(i!=0) cout<<' ';
		cout<<v2[i];
	}
	return 0;
}