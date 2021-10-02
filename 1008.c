#include <stdio.h> 
#include <string.h>
int main(){
	int a[100];
	int b=0,c=0;
	int i=0,j=0;
	scanf("%d",&b);
	scanf(" ");
	scanf("%d\n",&c);
	c%=b;              //如果是正常，余数就等于c,如果b=c，什么也不用做            
	for(i=0;i<b;i++) 
	{
	if(i!=b-1)
	{
	scanf("%d",&a[i]);
	scanf(" ");
    }
	else
	scanf("%d",&a[i]);
	}
	for(j=b-c;j<=b-1;j++)
	{
		printf("%d",a[j]);
		if(c!=b)
		{
			printf(" ");
		}
	}
	for(j=0;j<b-c;j++)
	{
		printf("%d",a[j]);
		if(j!=b-c-1)
		{
			printf(" ");
		}
	}
	return 0;
}
