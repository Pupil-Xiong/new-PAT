#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

typedef struct node* np;

struct node 
{
	int data;      //数据域
	np lchild;  //左孩子指针
	np rchild;  //右孩子
};

np root=NULL;   //新建根结点，其实地址是NULL

np newNode(int v)
{
	np Node = new node;  //new一个结点，后续delete回收
	Node->data = v;
	Node->lchild = Node->rchild = NULL;   //初始状态下没有孩子
	return Node;   //返回指针
}

void search(np root,int x,int newdata)
{
	if(root==NULL)
		return;
	if(root->data==x)        //找到数据=x的，然后修改为newdata
		root->data=newdata;
	search(root->lchild,x,newdata);  // x和newdata不会因为递归而改变
	search(root->rchild,x,newdata);
	return;    //C++会自动添加这个return，不写也可以的意义，函数终止，自动退回到上次递归调用函数的位置。
}

void insert(np &root,int x)
{
	if(root==NULL)    //空结点，说明可以插入
		root=newNode(x);
	return;
	insert(root->lchild,x);
	insert(root->rchild,x);
}

np Create(int data[],int n)
{
	np root = NULL;    //新建空根结点
	for(int i=0;i<n;i++)
	{
		insert (root,data[i]);  //跳转到上面的插入函数
	}
	return root;     //返回根结点
}

void preorder(np root)
{
	if(root == NULL)
		return;      //到达空树，递归边界
	printf("%d\n",root->data);
	preorder(root->lchild);   //访问左子树
	preorder(root->rchild);   //访问右子树
}


int main()
{



	return 0;
}