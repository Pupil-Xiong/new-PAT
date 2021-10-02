#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲������������NULL */

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

/* ��Ĵ��뽫��Ƕ������ */
List Merge( List L1, List L2 )
{
	List L,pa,pb,pc;
	L=(List)malloc(sizeof(struct Node));   //ע��malloc�﷨ 
	pa=L1->Next;   //L1��Head 
	pb=L2->Next;   //L2��Head 
	pc=L;          //pc��ָ�룬L��Head 
	while(pa&&pb)
	{
		if(pa->Data<=pb->Data)
		{
			pc->Next=pa;        //ע�ⲻҪд��L->Next������Next������ָ���ƶ�ʵ�ֵ� 
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
	L2->Next=NULL;    //�������
	return L; 
}

