#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string temp;
	string a1;
	double num;
	int d;
	double aa=0,temp1=0;
	cin>>a>>d;
	temp=a;
	a1=a.substr((a.size()-d),d);
	a.erase((a.size()-d),d);
	a=a1+a;
	for(int i=0;i<a.size();i++)
	{
		aa=aa*10+a[i]-'0';
		temp1=temp1*10+temp[i]-'0';
	}
	num=aa/temp1;
	printf("%.2f",num);
	return 0;
}