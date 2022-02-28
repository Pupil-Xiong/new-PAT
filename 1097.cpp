#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=0,k=0,x=0,temp=0;
	int i=0,j=0,f=1,sum=0;
	cin>>n>>k>>x;
	vector<int> v[n];
	getchar();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>temp;
			v[i].push_back(temp);
		}
		int temp1=(i+1)%2;
		if(temp1!=0)
		{
			for(j=0;j<f;j++)
			{
				v[i].pop_back();
				v[i].insert(v[i].begin(),x);
			}
			f++;
			if(f>k)
				f=1;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
			sum+=v[j][i];
		cout<<sum;
		if(i!=n-1)
			cout<<' ';
	}
	return 0;
}