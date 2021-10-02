#include <iostream>
using namespace std;
int main()
{
	int sum=0,maxsum=0;
	int i=0,k=0;
	int a[100000]={0};
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		sum+=a[i];
		if(sum>maxsum)   //判断加上后是否变大，还可暂存为最大值 
		{
			maxsum=sum;
		}
		if(sum<0)   //判断连起来是否能增大右边 ，不能就彻底没用，整个丢弃 
		{
			sum=0;
		}
	}
	cout<<maxsum; 
	return 0;
}
