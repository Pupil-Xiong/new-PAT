#include <iostream>


//查找操作
void search(node* root, int x)
{

	if(root == NULL)   //访问到叶子结点
	{
		printf("search failed\n");
		return;
	}
	if(x==root->data)
	{
		printf("%d\n",root->data);
	}
	else if(x<root->data) //小了就往左子树访问
	{
		search(root->lchild,x);   //递归调用
	}
	else
	{
		search(root->rchild,x);
	}
}


//插入操作
void insert(node* &root, int x)
{

	if(root == NULL)   //访问到叶子结点
	{
		root=newNode(x);   //区别在这
		return;
	}
	if(x==root->data)
	{
		printf("%d\n",root->data);
	}
	else if(x<root->data) //小了就往左子树访问
	{
		search(root->lchild,x);   //递归调用
	}
	else
	{
		search(root->rchild,x);
	}
}
