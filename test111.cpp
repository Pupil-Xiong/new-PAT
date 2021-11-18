#include <iostream>
#include <cstdio>
using namespace std;

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *link;
}LNode,*LinkList;

int search_k(LinkList list,int k)
{
	LNode *p=list->link,*q=list->link;
	int count=0;
	while(p!=NULL)
	{
		if(count<k)	count++;
		else q=q->link;
		p=p->next;
	}
	if(count<k)
		return 0;
	else
	{
		cout<<q->data;
		return 1;
	}
}

int main()
{


	return 0;
}