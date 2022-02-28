#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long int n=0,p=0,i=0,j=0,max=0,flag=0;
	cin>>n>>p;
	vector<long int> v(n);
	getchar();
	for(i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
		for(j=i+max;j<n&&v[i]*p>=v[j];j++) 
			max++;
	if(flag==1)cout<<max;
	return 0;
}