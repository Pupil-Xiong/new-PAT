#include <iostream>
#include <string>

using namespace std;

int F(int n)
{
	if(n==0||n==1)return 1;
	else return F(n-1)+F(n-2);
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
} 