#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;

typedef struct LNode *List;   //���ں������ٶ���ָ�� 
struct LNode{
	int Data[MAXSIZE];   //������ 
	List Next;           //ָ���� 
};

	struct LNode L;  //�����һ���ṹ����L 
	List Ptrl;     //����ṹ�����ָ��,ָ���ĵ�һ���ڵ�L
	
int Length(List Ptrl)
{
	List p=Ptrl;   //����ָ��pΪ��һ���ڵ��ַ 
	int j=0;
	while(p)     //p!=NULL�ͻ����ִ�� 
	{
		p=p->Next;
		j++;
	} 
	return j;
}

List FindKth(int K,List Ptrl)   //�����ҵ�K�� 
{
	List p=Ptrl;   //������ʱָ�룬��¼ָ���ʼλ�� 
	int i=1;
	while(p!=NULL&&i<K)  //ѭ���ж��Ƿ�Ϊ�գ�ֱ������ 
	{
		p=p->Next;      
		i++;
	}                  //�õ���
	if(i==K) 
		return p;   //�ҵ���K��������ָ��   
	else
		return NULL;
}

List Insert(int X,int i,List Ptrl)         //��Ҫ��������ݺ�λ�� ,����֮����� 
{
	List p,s;
	if(i==1)      //�����ڵ�һ���ڵ� 
	{
		s=(List)malloc(sizeof(struct LNode));   //��ָ��s����ռ� 
		s->Data=X;                              //���ڵ�������ֵ 
		s->Next=Ptrl;                           //����һ�ڵ㸳ָ��    !!!���Next�ɻ� 
		return s;
	}
	p=FindKth(i-1,Ptrl);        //���ҵ�i-1��Ԫ�أ������ھ��޷����� 
	if(p==NULL) 
	{
		printf("����i��");
		return NULL;
	}
	else
	{
		s=(List)malloc(sizeof(struct LNode));
		s->Data=X; 
		s->Next=p->Next;     //��ԭ��p����һ��p+1����s����һ��
		p->Next=s;           //p����һ������ָ��s
		return Ptrl; 
	}
}

List Delete(int i,List Ptrl)
{
	List p,s;
	if(i==1)        //�����ɾ����һ���ڵ� 
	{
		s=Ptrl;     //�ѵ�һ���ڵ�L��ָ�븳��s 
		if(Ptrl!=NULL)    //�����һ��ָ��PtrlΪNULL����Ϊ�ձ� 
			Ptrl=Ptrl->Next;   //ǰָ�뱻��ָ���������ֵ���� 
		else
			return NULL;
		free(s);              //�ͷ� ����Ŀռ� 
		return Ptrl;          //����ָ�� 
	}
	p=FindKth(i-1,Ptrl);         //���ҵ�i-1���ڵ� 
	if(p==NULL)
	{
		printf("��%d���ڵ㲻����",i-1);
		return NULL;
	}
	else if(p->Next==NULL)
	{
		printf("��%d����㲻����",i);
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
