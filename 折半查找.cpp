#include <iostream>
using namespace std;
int main()
{
	int low,high,mid;
	int a[11]={0,1,16,24,35,47,59,62,73,88,99};
	int key=0,flag=0;
	cin>>key;
	low=0;
	high=10;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key>a[mid])
			low=mid+1;
		else if(key<a[mid])
			high=mid-1;
		else 
		{
			cout<<mid;
			flag=1;
			break;   //找到后就弹出 
		}
	}
	if(flag==0)
	cout<<"未找到";
	return 0;
 } 
