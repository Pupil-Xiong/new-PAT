#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n=0,m=0,a=0,b=0,c=0;
	int i=0,j=0;
	int temp=0;
	scanf("%d%d%d%d%d", &m, &n, &a, &b, &c);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &temp);
			if(temp>=a&&temp<=b)
				temp=c;
			printf("%03d",temp);
			if(j!=n-1)    //把所有能换成printf和scanf的都换成，cin/cout会超时，坑
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}