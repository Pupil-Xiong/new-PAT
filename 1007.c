#include <stdio.h>
#define max 1000
int judge(x)
{
	int i=0;
	for(i=2;i*i<=x;i++)
  {
	if(x%i==0)
	{
	return 0;
	}
  }
	return 1;
}
int main(){
	int x; 
	int a[max];
	int n=0,j=0,k=0,h=0;
	int num=0;
	scanf("%d",&n);
	for(j=3;j<=n-2;j+=2)  //除了2外的偶数不可能是素数 
	{
    k=judge(j);  
    h=judge(j+2);
    if(k==1&&h==1)
    {
	num++;
    }
	}
	printf("%d",num);
    return 0;
	}
