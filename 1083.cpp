#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n=0,i=0,s[10000]={0},t=0;
	cin>>n;
	getchar(); 
	for(i=1;i<=n;i++)
	{
		cin>>t;
		s[abs(t-i)]++;
	}
	for(i=n;i>=0;i--)
		if(s[i]>1)
			cout<<i<<' '<<s[i]<<endl;
	return 0;
}