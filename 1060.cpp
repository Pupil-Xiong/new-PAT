#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n=0;
	vector<int> v;
	int i=0,temp=0;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),cmp);
	for(i=n-1;i>=0;i--)
		if(v[i]>i+1)	
			break;
	cout<<i+1;
	return 0;
}