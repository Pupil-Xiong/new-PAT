#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int a[10001];
	int i=3,j=0;  //i是数字序号 
	int k=0,q=2;  //q是素数序号 
	int b=0,c=0,d=0;
	int m=0,n=0;
	a[0]=2;
	a[1]=3;
	cin>>m>>n;
	while(q!=n)
	{	if(i%2==0)
		{
			k=0;
		}
		else
		{
			for(j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					k=0;
					break;
				}
				else
					k=1;
			}
		}
		if(k==1)
		{
			a[q]=i;
			q++;
		}
		i+=2;
	}
	c=(n-m+1)/10;
	for(b=0;b<c;b++)
	{
		for(d=m-1;d<m+9;d++)
		{
			cout<<a[b*10+d];
			if(b*10+d!=n-1)
			{
				if(d==m+8)
				cout<<endl;
				else
				cout<<" ";
			}
		}
	}
	for(b=c*10+m-1;b<n;b++)
	{
		cout<<a[b];
		if(b!=n-1)
		{
		  cout<<" ";
		}
	}
	return 0;
} 
