#include <stdio.h>
#include <string.h>
int main(){
	const char *a[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char b[105];  //oj无法接受没有105的空数组 
	int k=0,i=0,j=0;
	int p=0;
	int q[105]={0};
	scanf("%s",b);
	k=strlen(b);
	for(i=k-1;i>=0;i--)
	{
		p=p+b[i]-'0';
	}
	i=0;
	while(p>0)
	{
		q[i]=p%10;
		p=p/10;
		i++;
	}
    for(j=i-1;j>=0;j--)
    {
    	if(j>0)
    	printf("%s ",a[q[j]]);
    	else
    	printf("%s",a[q[j]]);
	}
	return 0;
}
