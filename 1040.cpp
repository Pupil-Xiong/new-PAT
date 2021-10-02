#include <iostream>
#include <string>
using namespace std;
 
 int main()
 {
 	string s;
 	cin>>s;
 	int i=0,j=0;
 	int t=0,p=0;
 	int sum=0;
 	for(i=0;i<s.length();i++)
 	{
 		if(s[i]=='T')
 			t++;
	}
	for(j=0;j<s.length();j++)
	{
		if(s[j]=='P')
			p++;
		else if(s[j]=='T')
			t--;
		else if(s[j]=='A')
			sum=(sum+p*t)%1000000007;
	}
	cout<<sum;
 	return 0;
 }
