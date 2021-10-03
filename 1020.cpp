#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//单价，库存，需求量
typedef struct item
{

	double sum;
	double storage;
	double price;

}item;

item cake[1010];

bool cmp(item a,item b)
{
	return a.price>b.price;
}


int main()
{
	int n=0;
	scanf("%d",&n);  //产品种类
	double k=0;
	scanf("%lf",&k);  //需求量
	getchar();
	int i=0;
	for(i=0;i<n;i++)
	{

		scanf("%lf",&cake[i].storage);

	}
	getchar();
	for(i=0;i<n;i++)
	{

		scanf("%lf",&cake[i].sum);
		cake[i].price=cake[i].sum/cake[i].storage;
	}

	sort(cake,cake+n,cmp);

	double money=0;
	for(i=0;i<n;i++)
	{
		if(cake[i].storage<k)
		{
			money+=cake[i].sum;
			k-=cake[i].storage;
		}
		else 
		{
			money+=cake[i].price*k;
			break;
		}
	}
	printf("%.2lf",money);

	return 0;
}