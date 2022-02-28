#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int n=0,m=0;
	int k=0,i=0,j=0,q=0,f=0,flag=0;
	int s1,s3;
	map<int,vector<int>> mp;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>s1>>s3;
		mp[s1].push_back(s3);
		mp[s3].push_back(s1);
	}

	for(i=0;i<m;i++)
	{
		int a[100000]={0};
		getchar();
		cin>>k;
		vector<int> v;
		for(j=0;j<k;j++){
			cin>>q;
			v.push_back(q);
			a[v[j]]=1;
		}
		flag=0;
		for(j=0;j<k;j++)
			for(f=0;f<mp[v[j]].size();f++)
			{
				if(a[mp[v[j]][f]]==1)
					flag=1;
			}
		printf("%s\n",flag ? "No":"Yes");
	}

	return 0;
}