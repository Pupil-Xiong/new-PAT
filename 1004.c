#include <stdio.h>
#include <string.h>
typedef struct {           //引用结构体 
	char name[11];
	char number[11];
	int score;
}student;
int main(){
	int n=0,i=0;
	scanf("%d",&n);
	student a[1000];
	for(i=0;i<n;i++){
	scanf("%s",a[i].name);
	scanf("%s",a[i].number);
	scanf("%d",&a[i].score);
}
	int max=a[0].score,temp=0;
	int min=a[0].score,back=0;
	for(i=0;i<n;i++){
	if(a[i].score>max)
	{
		max=a[i].score;
		temp=i;
	}
	if(a[i].score<min){
		min=a[i].score;
		back=i;
	}
}
printf("%s %s\n",a[temp].name,a[temp].number);
printf("%s %s",a[back].name,a[back].number);
return 0;
}
