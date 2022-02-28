#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool jud(string a)
{
	string b=a;
	reverse(b.begin(),b.end());
	if(b==a) 
		return 1;
	else
	 	return 0;
}

int main()
{
	string s,s1,s2,sum;
	int k=0,i=0,j=0,carry=0;
	cin>>s>>k;
	for(i=1;i<=k;i++)
	{
		carry=0;
		s1=s;
		s2=s;
		reverse(s1.begin(),s1.end());
		for(j=s2.size()-1;j>=0;j--)
		{
			s[j]=(s2[j]-'0'+s1[j]-'0'+carry)%10+'0';
			carry=(s2[j]-'0'+s1[j]-'0'+carry)/10;
		}
		if(carry>0)
			s="1"+s;  //clear()函数不能和s连用，会无法输出s
		if(jud(s))
		{
			cout<<s<<endl;
			cout<<i;
			return 0;
		}
	}
	cout<<s<<endl;
	cout<<k;
	return 0;
}