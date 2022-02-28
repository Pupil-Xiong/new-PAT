#include <iostream>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
	int n=0,m=0,temp=0,temp1=0,count=0;

	cin>>n;
	int i=0,sum=-1;
	while(sum!=6174)
	{
		temp=0;
		temp1=0;
		count=0;
		multiset<int> s;
		if(sum!=-1)
			n=sum;
		for(i=0;i<4;i++)
		{
			m=n%10;
			s.insert(m);
			n/=10;
		}
		for(multiset<int>::iterator it=s.begin();it!=s.end();it++)
		{
			temp=temp*10+*it;
			temp1=temp1+(*it)*pow(10,count);
			count++;
		}
		sum=temp1-temp;
		printf("%04d - %04d = %04d",temp1,temp,sum);
		if(sum==0)
			break;
		else if(sum!=6174)
			cout<<endl;
	}
	return 0;
}