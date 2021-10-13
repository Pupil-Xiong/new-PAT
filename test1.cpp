#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a=0,b=0;
	int i=0;
	// while(scanf("%d%d",&a,&b)!=EOF)
	// {
		//printf("%d %d\n",max(a,b),min(a,b));
		// swap(a,b);
		// printf("%d %d\n",a,b);
		int c[5]={23,43,56,78,90};
		reverse(c,c+3);   //左含右不含
		for(i=0;i<5;i++)
			cout<<c[i]<<" ";
	// }
		cout<<endl;
	return 0;
}