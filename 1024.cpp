#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int num=0,num1=0,i=0,j=0,x=0;
	string s;
	cin>>s;
	num=s.find(".");
	num1=s.find("E");
	for(i=num1+2;i<s.length();i++)
		x=x*10+(s[i]-'0');
	cout<<x<<endl;
	if(s[num1+1]=='-')
	{
		cout<<num-x<<endl;
		if(num-x>0)
		{
			s.insert(num-x,".");
			s.erase(num+1);
		}
		s.erase(num);
	}
	else if(s[num1+1]=='+')
	{
		if(num+x+1<s.length())
			s.insert(num+x+1,".");
		else 
			for(i=0;i<num+x+1-s.length();i++)
				s+="0";
		s.erase(num);
	}




	return 0;
}