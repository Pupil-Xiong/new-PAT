#include <iostream>
using namespace std;
int main()
{
	int sum=0,maxsum=0;
	int i=0,k=0;
	int c=0,d=0;
	int flag=0;
	int count=0;
	int temp=0;
	int j1=0,j2=0;
	int a[100000]={0};
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
		if(a[i]>=0)
			count++;
	}
	for(i=0;i<k;i++)
	{
		sum+=a[i];
		if(sum>maxsum)   //�жϼ��Ϻ��Ƿ��󣬻����ݴ�Ϊ���ֵ 
		{
			maxsum=sum;
			flag++;
			if(flag==1)
			{
				c=a[i];   //��¼��ʼλ�� 
				if(temp==1)
				{
					c=
				}
			}
			if(flag!=0)
			{
				d=a[i];
			}
		}
		if(sum<0)   //�ж��������Ƿ��������ұ� �����ܾͳ���û�ã��������� 
		{
			sum=0;
			flag=0; 
		}
		else if(sum==0)
		{
			temp=1;
		}

	}
	if(count==0)
		cout<<"0"<<" "<<a[0]<<" "<<a[k-1];
	else
		cout<<maxsum<<" "<<c<<" "<<d; 
	return 0;
}
