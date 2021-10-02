#include <iostream>
using namespace std;
int main(){
	int n=0;
	long long a=0,b=0,c=0;
	int i=0,j=0;
	int k[100];
	cin>>n;
	if(n<=10)
	{
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(a+b>c)
		k[i]=1;
		else
		k[i]=0;
	}
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(k[i]==1)
			cout<<"Case #"<<j<<": true";
		else
			cout<<"Case #"<<j<<": false";
		if(i!=n-1)
			cout<<endl;
	}
}
	return 0;
} 
