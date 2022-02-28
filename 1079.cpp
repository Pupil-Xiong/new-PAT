#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool iter(string s )
{
	string r=s;
	reverse(r.begin(),r.end());
	if(s==r) return 1;
	else return 0;
}

int main()
{
	string s;
	int i=0;
	cin>>s;
	string s1=s;
	int a=0,count=0;
	while(count<=10&&a==0)
	{
		int carry=0;
		string r = s1;
		reverse(r.begin(),r.end());
		a=iter(s1);
		if(count==10&&a==0) cout<<"Not found in 10 iterations.";
		else if(a==0)
		{
			s=s1;
			for(i=s.size()-1;i>=0;i--)
			{
				s1[i]=(s1[i]-'0'+r[i]-'0'+carry)%10+'0';  //字符串方式计算长整数加法
				carry=(s[i]-'0'+r[i]-'0'+carry)/10;  //完成进位操作
			}
			if(carry>0)
				s1="1"+s1;
			cout<<s<<" + "<<r<<" = "<<s1<<endl;
		}
		else cout<<s1<<" is a palindromic number."<<endl;
		count++;
	}
	return 0;
}