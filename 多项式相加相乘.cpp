#include <iostream>
using namespace std;


typedef struct PolyNode *Polynomial;
struct PolyNode{
	int coef;     //����ϵ�� 
	int expon;    //����ָ�� 
	Polynomial link;   //����ָ����һ�ڵ��ָ�� 
};


Polynomial ReadPoly()
{
	Polynomial P,Rear,t;
	int n=0;
	int c=0,e=0;
	
	cin>>n;
	new P;    //����ͷΪ�սڵ� 
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
	
	P=(Polynomial)malloc(sizeof(struct PolyNode)); //����ָ��ռ�
	P->coef=c;    //��ϵ����ֵ 
	P->expon=e;   //ָ����ֵ 
	P->link=NULL; //ָ�븳ֵ 
	(*pRear)->link=P;    //pRear��ָ���ָ�룬Ϊ��������ֵ���� 
	*pRear=P;
}


int main()
{
	Polynomial P1,P2,PP,PS;  //����ָ��
	P1=ReadPoly();     //�������ʽ1 
	P2=ReadPoly();
	PP=Multi(P1,P2);    //���ص�����������һ��ָ�� 
	PrintPoly(PP);
	PS=Add(P1,P2);
	PrintPoly(PS);
	return 0;
}
