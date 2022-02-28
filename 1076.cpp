#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	int i=0,j=0;
	string s;
	char x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>s;
			x=s[0];
			y=s[2];
			if(y=='T')
				cout<<x-'A'+1;
		}
		getchar();
	}
	return 0;
}