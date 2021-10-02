#include <stdio.h>
int main(){
int a=0,b=0;
scanf("%d%d",&a,&b);
if(b==0)
printf("0 0");
else
printf("%d %d",a*b,b-1);
while(scanf("%d%d",&a,&b))
{
if(b!=0)
printf(" %d %d",a*b,b-1); 
else 
break;
}
return 0;
} 
