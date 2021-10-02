#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge( List L1, List L2 )
{
	List L,pa,pb,pc;
	L=(List)malloc(sizeof(struct Node));   //注意malloc语法 
	pa=L1->Next;   //L1做Head 
	pb=L2->Next;   //L2做Head 
	pc=L;          //pc做指针，L做Head 
	while(pa&&pb)
	{
		if(pa->Data<=pb->Data)
		{
			pc->Next=pa;        //注意不要写成L->Next，后续Next是依靠指针移动实现的 
			pc=pa;
			pa=pa->Next;
		}
		else if(pa->Data>pb->Data)
		{
			pc->Next=pb;
			pc=pb;
			pb=pb->Next;
		}
	}
	pc->Next=pa?pa:pb;
	L1->Next=NULL;
	L2->Next=NULL;    //链表清空
	return L; 
}

