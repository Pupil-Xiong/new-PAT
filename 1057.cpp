#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s;
	int i=0,j=0,num=0;
	int sum=0;
	int count[2]={0};
	stack<int> rest; 
	getline(cin,s);
	for(i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			sum+=s[i]-'a'+1;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			sum+=s[i]-'A'+1;
		}
	}
	while(sum!=0)
	{
		rest.push(sum%2);
		if(sum%2==0)
			count[0]++;
		else if(sum%2==1)
			count[1]++;
		sum/=2;
	}
	cout<<count[0]<<' '<<count[1];
	return 0;
}