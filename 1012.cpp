#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
//�ܱ� 5 ����������������ż���ĺ�   dż����� 
//���� 5 ������ 1 �����ְ�����˳����н������  c[]������� 
//�� 5 ������ 2 �����ֵĸ���     b[]
//�� 5 ������ 3 �����ֵ�ƽ��������ȷ��С����� 1 λ   sum/i
//�� 5 ������ 4 ���������������     max
int n=0;
int a[1001],b[5],f[5]={0};
int e[1001];
int i=0,j=0,k=0;
double aver=0;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>a[i];
	e[i]=a[i]%5;
	if(e[i]==0)
	{
		if(a[i]/2==0)
		f[0]=f[0]+a[i];
		b[0]++;
	}
	else if(e[i]==1){
		b[1]++;
		j=++b[1];
		f[1]=f[1]+pow((-1),j)*e[i];
		if(j>0){
		j++;
	    }
	}
	else if(e[i]==2){
		b[2]++;
		f[2]=b[2];
	}
	else if(e[i]==3){
		b[3]++;
		sum=sum+a[i];
		f[3]=sum/b[3];
	}
	else if(e[i]==4)
	{
		b[4]++;
		if(e[i]>f[4])
		f[4]=e[i];
	}
	for(k=0;k<5;k++)
	{
	if(b[k]==0)
	cout<<"N";
	else if(k!=3&&b[k]!=0)
	{
	cout<<f[k];
	}
	else if(k==3&&b[k]!=0)
	{
		cout<<setprecision(1)<<f[3];
	}
	if(k!=4)
	cout<<" ";
	}
}
return 0;
} 
