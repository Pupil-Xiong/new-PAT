#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	int i=0,j=0,k=0,f=0,e=0;
	int n=0,flag=0,temp=0;
	cin>>n;
	getchar();
	int a[10];
	int sum=0;
	for(e=0;e<n;e++)
	{
		vector<int> s;
		cin>>a[e];
		temp=sqrt(a[e]);
		for(i=1;i<=a[e];i++)
		{
			if(a[e]%i==0)
				s.push_back(i);
			//注意如果循环次数用temp，即for(i=1;i<=temp;i++)
			//需要两次s.push_back(i);
			//      s.push_back(a[e]/i);
			//需要注意如果是出现25这样的数，有相同因数5*5，只记录一次
		}
		flag=0;
		int q=s.size();
		if(q<4)
			flag=2;
		for(i=0;i<q-3&&flag==0;i++)
			for(j=i+1;j<q-2&&flag==0;j++)
				for(k=j+1;k<q-1&&flag==0;k++)
					for(f=k+1;f<q&&flag==0;f++)
					{
						sum=s[i]+s[j]+s[k]+s[f];
						if(sum%a[e]==0)
						{
							flag=1;
							break;
						}
					}
		if(flag==0||flag==2)
			cout<<"No";
		if(flag==1)
			cout<<"Yes";
		if(e!=n-1)
			cout<<endl;
	}
	return 0;
}