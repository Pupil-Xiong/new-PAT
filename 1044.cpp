#include <iostream>
#include <string>
using namespace std;

string a[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13]={"###","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string s;

void func1 (int t)  //处理数字
{
	if(t/13) cout<<b[t/13];
	if(t/13&&t%13) cout<<' ';
	if(t%13||t==0) cout<<a[t%13];
}

void func2 ()
{
	int t1=0,t2=0;
	string s1=s.substr(0,3),s2;
	if(s.length()>4) s2=s.substr(4,3);  //cin会读入空格并保留
	for(int i=0;i<13;i++)
	{
		if(s1==a[i]||s2==a[i]) t1=i;
		if(s1==b[i]) t2=i;
	}
	int sum=t2*13+t1;
	cout<<sum;
}

int main()
{
	int n=0,x=0;
	cin>>n;
	getchar();
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		x=0;
		getline(cin,s);
		if(s[0]>='0'&&s[0]<='9')
		{
			for(j=0;j<s.length();j++)
				x=x*10+(s[j]-'0');
			func1(x);
		}
		else
			func2();
		cout<<endl;
	}
	return 0;
}