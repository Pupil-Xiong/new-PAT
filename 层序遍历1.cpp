#include <iostream>
#include <cstdio>
using namespace std;

void LayerOrder(node *root)
{
	queue<node*> q;   //指针队
	q.push(root);
	while(!q.empty())
	{
		node *now=q.front();
		q.pop();
		printf("%d",now->data);
		if(now->lchild !=NULL) q.push(now->lchild);
		if(now->rchild !=NULL) q,push(now->rchild);
	}
}

int main()
{
	



	return 0;
}