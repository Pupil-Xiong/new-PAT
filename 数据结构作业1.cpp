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
		if(sum>maxsum)   //�жϼ��Ϻ��Ƿ��󣬻����ݴ�Ϊ���ֵ 
		{
			maxsum=sum;
		}
		if(sum<0)   //�ж��������Ƿ��������ұ� �����ܾͳ���û�ã��������� 
		{
			sum=0;
		}
	}
	cout<<maxsum; 
	return 0;
}
