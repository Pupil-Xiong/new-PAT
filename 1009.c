#include <stdio.h>
#include <string.h>
int main() {
	char a[81];
	gets(a);
	int i=0;
	for(i=strlen(a);i>0;i--){
		if(a[i]==' ')
		{
			printf("%s ",&a[i+1]);
			a[i]='\0';
		}
	}
	printf("%s",&a[i]);
    return 0; 
}
