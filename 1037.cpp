#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int ga[3],si[3],kn[3];
	int temp=0,temp1,flag=0;
	int i=0;
	for(i=0;i<2;i++)
		scanf("%d.%d.%d",&ga[i],&si[i],&kn[i]);
	if(ga[1]<ga[0])
	{
		swap(ga[0],ga[1]);
		swap(si[0],si[1]);
		swap(kn[0],kn[1]);
		flag=1;
	}
	else if(ga[1]==ga[0])
	{
		if(si[1]<si[0])
		{
			swap(ga[0],ga[1]);
			swap(si[0],si[1]);
			swap(kn[0],kn[1]);
			flag=1;
		}
		else if(si[1]==si[0])
		{
			if(kn[1]<kn[0])
			{
				swap(ga[0],ga[1]);
				swap(si[0],si[1]);
				swap(kn[0],kn[1]);
				flag=1;
			}
		}
	}
	if(kn[1]<kn[0])
	{
		temp=kn[0]-kn[1];
		temp1=temp/29+1;
		kn[2]=kn[1]+temp1*29-kn[0];
		si[1]-=temp1;
	}
	else
		kn[2]=kn[1]-kn[0];
	if(si[1]<si[0])
	{
		temp=si[0]-si[1];
		temp1=temp/17+1;
		si[2]=si[1]+temp1*17-si[0];
		ga[1]-=temp1;
	}
	else
		si[2]=si[1]-si[0];
	ga[2]=ga[1]-ga[0];
	if(flag==1)
		printf("-");
	printf("%d.%d.%d",ga[2],si[2],kn[2]);
	return 0;
}