#include <iostream>
#include <math.h>
using namespace std;

typedef struct 
{
	int id;
	int  x,y;
}person;

int  main()
{
	int n=0,i=0;
	person p[10000];
	int maxid,minid;
	int min=20000,max=-1,sum=0;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>p[i].id>>p[i].x>>p[i].y;
		sum=pow(p[i].x,2)+pow(p[i].y,2);
		if(sum<=min)
		{
			minid=p[i].id;
			min=sum;
		}
		if(sum>=max)
		{
			maxid=p[i].id;
			max=sum;
		}
	}
	printf("%.4d %.4d",minid,maxid);
	return 0;
}