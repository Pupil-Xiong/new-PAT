#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;

typedef struct LNode *List;   //用于后续快速定义指针 
struct LNode{
	int Data[MAXSIZE];   //数据域 
	List Next;           //指针域 
};

	struct LNode L;  //定义第一个结构对象L 
	List Ptrl;     //定义结构对象的指针,指向表的第一个节点L
	
int Length(List Ptrl)
{
	List p=Ptrl;   //定义指针p为第一个节点地址 
	int j=0;
	while(p)     //p!=NULL就会继续执行 
	{
		p=p->Next;
		j++;
	} 
	return j;
}

List FindKth(int K,List Ptrl)   //查找找第K个 
{
	List p=Ptrl;   //定义临时指针，记录指针初始位置 
	int i=1;
	while(p!=NULL&&i<K)  //循环判断是否为空，直到结束 
	{
		p=p->Next;      
		i++;
	}                  //得到表长
	if(i==K) 
		return p;   //找到第K个，返回指针   
	else
		return NULL;
}

List Insert(int X,int i,List Ptrl)         //需要插入的数据和位置 ,在这之后插入 
{
	List p,s;
	if(i==1)      //插入在第一个节点 
	{
		s=(List)malloc(sizeof(struct LNode));   //用指针s申请空间 
		s->Data=X;                              //给节点数据域赋值 
		s->Next=Ptrl;                           //给下一节点赋指针    !!!解决Next疑惑 
		return s;
	}
	p=FindKth(i-1,Ptrl);        //查找第i-1个元素，不存在就无法插入 
	if(p==NULL) 
	{
		printf("参数i错");
		return NULL;
	}
	else
	{
		s=(List)malloc(sizeof(struct LNode));
		s->Data=X; 
		s->Next=p->Next;     //把原先p的下一个p+1给到s的下一个
		p->Next=s;           //p的下一个重新指向s
		return Ptrl; 
	}
}

List Delete(int i,List Ptrl)
{
	List p,s;
	if(i==1)        //如果是删除第一个节点 
	{
		s=Ptrl;     //把第一个节点L的指针赋给s 
		if(Ptrl!=NULL)    //如果第一个指针Ptrl为NULL，则为空表 
			Ptrl=Ptrl->Next;   //前指针被后指针替代，则值交换 
		else
			return NULL;
		free(s);              //释放 请求的空间 
		return Ptrl;          //返回指针 
	}
	p=FindKth(i-1,Ptrl);         //查找第i-1个节点 
	if(p==NULL)
	{
		printf("第%d个节点不存在",i-1);
		return NULL;
	}
	else if(p->Next==NULL)
	{
		printf("第%d个结点不存在",i);
		return NULL;
	}
	else
	{
		s=p->Next;
		p->Next=s->Next;
		free(s);
		return Ptrl;
	}
}
int main()
{
 
	return 0;
}
