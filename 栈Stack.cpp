#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;
 
typedef struct SNode *Stack;
struct SNode
{
	int Data[MAXSIZE];   //����ջ 
	int top;             //����ջ��ָ�� 
};

void Push(Stack Ptrs,int item)    //��ջ���� 
{
	if(Ptrs->top==MAXSIZE-1)     //�ж�ջ��ָ��λ�� 
	{
		printf("ջ����");
		return; 
	}	
	else
	{
//		Ptrs->Data[++(Ptrs->top)]=item;    ����д��Ҳ���� 
		Ptrs->top++;   //ջ��ָ�������ƶ� 
		Ptrs->Data[Ptrs->top]=item;    //��itemֵ������Ӧ��Data[Ptrs->top] 
		return;
	}
} 

int Pop(Stack Ptrs)      //��ջ 
{
	if(Ptrs->top==1)
	{
		printf("��ջ��");
		return ERROR;
	}
	else
	{
		return (Ptrs->Data[Ptrs->top]);
		Ptrs->top--;
	}
}
int main()
{
	
}
