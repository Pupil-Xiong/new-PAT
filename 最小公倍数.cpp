#include <iostream>
#include <cstdio>


int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int lcm(int a,int b,int d)
{
	return a/d*b;
}

int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		printf("%d\n",gcd(m,n));
		printf("%d\n",lcm(m,n,gcd(m,n)));
	}


	return 0;
}