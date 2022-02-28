#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int data[100005],next[100005],list[100005];
	int first=0,n=0,k=0,i=0,num=0,sum=0;
	cin>>first>>n>>k;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>num>>data[num]>>next[num];
	}
	while (first != -1)
	{
		list[sum++]=first;
		first=next[first];
	}
	for(i=0;i<(sum-sum%k);i+=k)
		reverse(begin(list)+i,begin(list)+i+k);
	for(i=0;i<sum-1;i++)
		printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	printf("%05d %d -1",list[i],data[list[i]]);
	return 0;
}