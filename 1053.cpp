#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=0,d=0,i=0,j=0,k=0,count=0;
	double count1=0,count2=0,e=0,num=0;
	cin>>n>>e>>d;
	for(i=0;i<n;i++)
	{
		getchar();
		count=0;
		cin>>k;
		for(j=0;j<k;j++)
		{
			cin>>num;
			if(num<e) count++;
		}
		if(count>k/2)
			k>d ? count1++ : count2++;
	}
	count2=count2/n*100.0;
	count1=count1/n*100.0;
	printf("%.1f%c %.1f%c",count2,'%',count1,'%');
	return 0;
}