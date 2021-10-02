#include <iostream>
#include <string>
using namespace std;

int Jud(string s)
{
	int flag1=0,flag2=0;
	int flag=0;
	int i=0;
	if(s.length()>=6)
	{
		for(i=0;i<s.length();i++)
		{
				if((s[i]<'A'||s[i]>'Z')&&(s[i]<'a'||s[i]>'z')&&(s[i]<'0'||s[i]>'9')&&(s[i]!='.'))//不合法 
					{
						return 1;	//出现不合法字符 
						flag=1;
						break;
					}
		}
		if(flag!=1)
		{
			for(i=0;i<s.length();i++)
			{
				if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
				{
					flag1=1;
					if(flag1==1&&flag2==1)
					{
						return 4;
						break;
					}
				}
				else if(s[i]>='0'&&s[i]<='9')
				{
					flag2=1;
					if(flag1==1&&flag2==1)
					{
						return 4;
						break;
					}
				}
			}
		}
		if(flag1!=1&&flag2==1)
		{
			return 2;
		}
		else if(flag1==1&&flag2!=1)
		{
			return 3;
		}
	}
	else
		return 0;//太短 
}
int main()
{
	int n=0;
	int i=0;
	string s[100];
	int a[100];
	cin>>n;
	getchar();  //将回车回收，否则会被getline误读入 
	for(i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=Jud(s[i]);
		if(a[i]==0)
			cout<<"Your password is tai duan le.";
		else if(a[i]==1)
			cout<<"Your password is tai luan le.";
		else if(a[i]==2)
			cout<<"Your password needs zi mu.";
		else if(a[i]==3)
			cout<<"Your password needs shu zi.";
		else if(a[i]==4)
			cout<<"Your password is wan mei.";
		if(i<n-1)
		{
			cout<<endl;
		}
	}
	return 0;
}
