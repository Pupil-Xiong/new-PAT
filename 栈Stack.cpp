#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;
 
typedef struct SNode *Stack;
struct SNode
{
	int Data[MAXSIZE];   //建立栈 
	int top;             //定义栈顶指针 
};

void Push(Stack Ptrs,int item)    //入栈操作 
{
	if(Ptrs->top==MAXSIZE-1)     //判断栈顶指针位置 
	{
		printf("栈堆满");
		return; 
	}	
	else
	{
//		Ptrs->Data[++(Ptrs->top)]=item;    这种写法也可以 
		Ptrs->top++;   //栈顶指针向上移动 
		Ptrs->Data[Ptrs->top]=item;    //把item值赋给对应的Data[Ptrs->top] 
		return;
	}
} 

int Pop(Stack Ptrs)      //出栈 
{
	if(Ptrs->top==1)
	{
		printf("堆栈空");
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
