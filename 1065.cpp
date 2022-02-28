#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	vector<int> a(100000);
	vector<int> b(100000);
	vector<int> c;
	int n=0,m=0,i=0,j=0,num=0,count=0;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>num>>a[num];
		a[a[num]]=num;
		getchar();
	}
	cin>>m;
	getchar();
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(b.begin(),b.end(),cmp);
	for(i=m-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(a[b[i]]==b[j])
				break;
			else if(j==m-1)
			{
				c.push_back(b[i]);
				count++;
			}
		}
	}
	cout<<count;
	if(count!=0)
		cout<<endl;
	for(i=0;i<count;i++)
	{
		printf("%05d",c[i]);  //注意5位数
		if(i!=count-1)
			cout<<' ';
	}
	return 0;
}