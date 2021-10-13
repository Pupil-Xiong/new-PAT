#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#define maxn 100005
using namespace std;

struct node
{
	int address;
	int data;
	int next;
	bool flag;
}node[maxn];

bool cmp(struct node a,struct node b)
{
	if(a.flag==false||b.flag==false)
		return a.flag >b.flag;
	else
		return a.data <b.data;
}
int main()
{
	for(int i=0;i<maxn;i++)
	{
		node[i].flag=false;
	}
	int n=0,begin;
	int address,data,next;
	scanf("%d%d",&n,&begin);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&address,&data,&next);
		node[address].address=address;
		node[address].data=data;
		node[address].next=next;
	}
	int count=0,p=begin;
	while(p!=-1)
	{
		node[p].flag=true;
		count++;
		p=node[p].next;
	}
	if(count==0)
	{
		printf("0 -1");
	}
	else
	{
		sort(node,node+maxn,cmp);
		printf("%d %05d\n",count,node[0].address);
		for(int i=0;i<count;i++)
		{
			if(i!=count-1)
			{
				printf("%05d %d %05d\n",node[i].address,node[i].data,node[i+1].address);
			}
			else
			{
				printf("%05d %d -1",node[i].address,node[i].data);
			}
		}
	}
	return 0;
}