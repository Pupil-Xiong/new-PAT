#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1;
	int i=0,j=0;
	int b=0;
	int q[1005]={0};
	int r=0,c=0;

	cin>>s1>>b;
	for(i=0;i<s1.length();i++)
	{
		c=r*10+(s1[i]-'0');
		q[i]=c/b;
		r=c%b;

	}
	for(i=0;i<s1.length();i++)
	{
		if(q[i]!=0)
			break;
	}
	if(q[i+1]==0)
		cout<<0;
	for(i;i<s1.length();i++)
	{
		cout<<q[i];
	}
	cout<<' '<<r;
	return 0;
}