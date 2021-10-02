#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	string a,b[6]={"P","A","T","e","s","t"};
	int i=0,j=0;
	int count[6]={0};
	int sum=1;
	cin>>a;
	for(i=0;i<a.length();i++)
	{
		if(a[i]=='P')
		count[0]++;
		else if(a[i]=='A')
		count[1]++;
		else if(a[i]=='T')
		count[2]++;
		else if(a[i]=='e')
		count[3]++;
		else if(a[i]=='s')
		count[4]++;
		else if(a[i]=='t')
		count[5]++;
	}
	while(sum!=0)
	{
		for(j=0;j<6;j++)
		{
			if(j==0)
			sum=0;
			if(count[j]!=0)
			{
				cout<<b[j];
				count[j]--;
		    }
		    sum=sum+count[j];
		}
    }
	return 0;
}
