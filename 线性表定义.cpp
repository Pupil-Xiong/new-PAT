#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;

typedef struct LNode *List;   //定义之后 List XXX就能快速定义 
struct LNode{
	int Data[MAXSIZE];
	int Last;  //记录尾节点位置 
}; 
struct LNode L;  //定义结构变量（结构对象）
List PtrL;  //快速定义结构体指针 

List MakeEmpty()  //初始化 
{
	List PtrL;  //声明指针
	PtrL=(List)malloc(sizeof(struct LNode));   //建表
	PtrL->Last=-1;  //Ptrl指针初始化位置为-1
	return PtrL;  //返回Ptrl的大小 
}

int Find(int X,List PtrL)   //查找 
{
	int i=0;
	while(i<=PtrL->Last&&PtrL->Data[i]!=X)   //执行循环,只有找到或到最后才停止 
		i++;
	if(i>PtrL->Last)  //没找到返回-1 
		return -1;
	else    //找到就返回位置 
	return i;
}

void Insert(int X,int i,Lsit PtrL)   //插入的元素，插入的位置，以及插入需要的结构体指针 
{
	int j;
	if(PtrL->Last==MAXSIZE-1)   //最后一位是数组最大值，不能插入 
	{
		printf("表满");
		return;
    }	
    if(i<1||i>PtrL->Last+2)   //检查插入位置合法
	{
		printf("插入位置不合法");
		return;
	} 
	for(j=PtrL->Last;j>=i-1;j--)        //从最后一个元素起循环向后移动 
		PtrL->Data[j+1]=PtrL->Data[j];
	PtrL->Data[i-1]=X;    //元素插入新位置 
	PtrL->Last++;         //最后位置Last指针+1 !!!
	return;
} 

void Delete(int i,List PtrL)   //删除元素操作
{
	int j;
	if(PtrL->Last==MAXSIZE-1)
	{
		printf("空表，无法进行操作");
		return;   //return即给出返回，不执行下面命令，完成函数调用 
	}
	if(i<1||i>PtrL->Last+1)   //检查删除位置的合法性
	{
		printf("不存在第%d个元素",i);
		return;	
	}	
	for(j=i;j<=PtrL->Last;j++)
		PtrL->Data[j-1]=PtrL->Data[j];   //要删除的直接被后一位覆盖 
		//这里不需要return,需要循环执行
	PtrL->Last--;  //末尾指针不会自己改变，删除后需要手动大小-1 
	return;
}

 
int main()
{
	return 0;
}
