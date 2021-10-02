#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string a,b;      //string 处理为字符串，可以逐字判断 
	int c=0,d=0;
	int i=0,j=0;
	int sum1=0,sum2=0;
	cin>>a>>c>>b>>d;
	for(i=0;i<a.length();i++)
		if(a[i]-'0'==c)
			sum1=sum1*10+c;
	for(j=0;j<b.length();j++)
		if(b[j]-'0'==d)
			sum2=sum2*10+d;
	sum1=sum1+sum2;
	cout<<sum1; 
	return 0;
} 
