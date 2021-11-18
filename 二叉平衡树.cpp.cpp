#include <iostream>
	void search(node* root,int x)
	{
		if(root == NULL)
		{
			printf("search failed\n");
			return;
		}
		if(x==root->data)
		{
			printf("%d\n",root->data);
		}
		else if(x<root->data)
			search(root->lchild,x);
		else
			search(root->rchild,x);
	}