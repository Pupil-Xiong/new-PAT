#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	vector<int> s={2,0,1,9};
	int i=0,j=0,sum=0,k=0;
	for(i=4;i<n;i++)
	{
		sum=0;
		for(j=i-1;j>=i-4;j--)
			sum+=s[j];
		sum%=10;
		s.push_back(sum);
	}
	for(k=0;k<n;k++)
		cout<<s[k];
	return 0;
}