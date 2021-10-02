#include <iostream>
#include <string>
#define MAXSIZE 100
using namespace std;

typedef struct LNode *List;   //����֮�� List XXX���ܿ��ٶ��� 
struct LNode{
	int Data[MAXSIZE];
	int Last;  //��¼β�ڵ�λ�� 
}; 
struct LNode L;  //����ṹ�������ṹ����
List PtrL;  //���ٶ���ṹ��ָ�� 

List MakeEmpty()  //��ʼ�� 
{
	List PtrL;  //����ָ��
	PtrL=(List)malloc(sizeof(struct LNode));   //����
	PtrL->Last=-1;  //Ptrlָ���ʼ��λ��Ϊ-1
	return PtrL;  //����Ptrl�Ĵ�С 
}

int Find(int X,List PtrL)   //���� 
{
	int i=0;
	while(i<=PtrL->Last&&PtrL->Data[i]!=X)   //ִ��ѭ��,ֻ���ҵ�������ֹͣ 
		i++;
	if(i>PtrL->Last)  //û�ҵ�����-1 
		return -1;
	else    //�ҵ��ͷ���λ�� 
	return i;
}

void Insert(int X,int i,Lsit PtrL)   //�����Ԫ�أ������λ�ã��Լ�������Ҫ�Ľṹ��ָ�� 
{
	int j;
	if(PtrL->Last==MAXSIZE-1)   //���һλ���������ֵ�����ܲ��� 
	{
		printf("����");
		return;
    }	
    if(i<1||i>PtrL->Last+2)   //������λ�úϷ�
	{
		printf("����λ�ò��Ϸ�");
		return;
	} 
	for(j=PtrL->Last;j>=i-1;j--)        //�����һ��Ԫ����ѭ������ƶ� 
		PtrL->Data[j+1]=PtrL->Data[j];
	PtrL->Data[i-1]=X;    //Ԫ�ز�����λ�� 
	PtrL->Last++;         //���λ��Lastָ��+1 !!!
	return;
} 

void Delete(int i,List PtrL)   //ɾ��Ԫ�ز���
{
	int j;
	if(PtrL->Last==MAXSIZE-1)
	{
		printf("�ձ��޷����в���");
		return;   //return���������أ���ִ�����������ɺ������� 
	}
	if(i<1||i>PtrL->Last+1)   //���ɾ��λ�õĺϷ���
	{
		printf("�����ڵ�%d��Ԫ��",i);
		return;	
	}	
	for(j=i;j<=PtrL->Last;j++)
		PtrL->Data[j-1]=PtrL->Data[j];   //Ҫɾ����ֱ�ӱ���һλ���� 
		//���ﲻ��Ҫreturn,��Ҫѭ��ִ��
	PtrL->Last--;  //ĩβָ�벻���Լ��ı䣬ɾ������Ҫ�ֶ���С-1 
	return;
}

 
int main()
{
	return 0;
}
