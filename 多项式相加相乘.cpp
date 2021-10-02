#include <iostream>
using namespace std;


typedef struct PolyNode *Polynomial;
struct PolyNode{
	int coef;     //定义系数 
	int expon;    //定义指数 
	Polynomial link;   //定义指向下一节点的指针 
};


Polynomial ReadPoly()
{
	Polynomial P,Rear,t;
	int n=0;
	int c=0,e=0;
	
	cin>>n;
	new P;    //链表头为空节点 
	P->link=NULL;
	Rear=P;
	while(n--)
		{
			cin>>c>>e;
			Attach(c,e,&Rear);
		}
	t=P;
	P=P->link;
	delete t;
return P;
}

void Attach(int c,int e,Polynomial *pRear)
{
	Polynomial P;    
	
	P=(Polynomial)malloc(sizeof(struct PolyNode)); //申请指针空间
	P->coef=c;    //给系数赋值 
	P->expon=e;   //指数赋值 
	P->link=NULL; //指针赋值 
	(*pRear)->link=P;    //pRear是指针的指针，为后续函数值传递 
	*pRear=P;
}


int main()
{
	Polynomial P1,P2,PP,PS;  //定义指针
	P1=ReadPoly();     //读入多项式1 
	P2=ReadPoly();
	PP=Multi(P1,P2);    //返回的是链表，即是一个指针 
	PrintPoly(PP);
	PS=Add(P1,P2);
	PrintPoly(PS);
	return 0;
}
