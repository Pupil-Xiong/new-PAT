#include <stdio.h>
#include <string.h> 
# define max 105
int main(){
	char a[max]={0};
	int count[max]={0};
	int y[max]={0};
	int c=0,r=0,k=0;
	int i=0,j=0,p=0;
	int t=0,f=0;
	scanf("%d",&c);  //输入个数 
	if(c<=10)
	{
	while (r<c)
{
	scanf("%s",a);    //输入字符串
	k=strlen(a);
	p=0;
	f=0;
	t=0;
	for(i=0;i<k;i++)
	{
		if(a[i]!='P'&&a[i]!='A'&&a[i]!='T')
		{
		break;
	}
		else if(a[i]=='P')
		{
		count[0]=i;  //存储地址 
		p++;    //存储出现次数 
		}
		else if(a[i]=='A'){
			f++;}
		else if(a[i]=='T')
		{
			count[1]=i;
			t++;
		}
	}
	if(p!=1||t!=1||count[1]-count[0]<=1||f<1)   //
	{
		y[r]=0;
	}
	else
	{
		y[r]=1;
	}
	r++;
}
  for(j=0;j<r;j++)
  {
  	if(y[j]==0)
  	printf("NO");
  	else if(y[j]==1)
  	printf("YES");
  	if(j<r-1)
  	printf("\n");
  }
}
	return 0;
} 
