#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a,int b)
{
	return !b?a:gcd(b,a%b);  //三目运算，递归调用
}

int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		printf("%d",gcd(m,n));
	}
	return 0;
}