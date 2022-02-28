#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n=0,m=0,i=0,j=0,temp=0,max=-1,flag=0;
	cin>>n>>m;
	vector<int> v[m];
	vector<int> vw(n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>temp;
			v[i].push_back(temp);
			vw[j]+=temp;
			if(vw[j]>max)
				max=vw[j];
		}
	}
	cout<<max<<endl;
	for(i=0;i<vw.size();i++)
	{
		if(vw[i]==max)
		{
			if(flag==1)cout<<' ';
			cout<<i+1;
			flag=1;
		}
	}
	return 0;
}