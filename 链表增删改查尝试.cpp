//����ʵ��
#include <iostream>
using namespace std;

typedef struct LNode *node;

//��������ڵ�
typedef struct LNode
{
    int data;
    node next;
}LNode;

//�����ձ�
void Empty(node head)
{
    head->next=NULL;
    head->data=-1;
}

//����������
int length(node head)
{
    node p;
    p=head->next;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}


//β���½ڵ�
void add(node head,int X)
{
    node p=head;
    node p1=head->next;
    node newnode=new LNode;  //�����ڴ�
    newnode->data=X;
    while(p1!=NULL)
    {
        p=p1;
        p1=p1->next;
    }
    p->next=newnode;
    newnode->next=NULL;
}
//�м����ڵ�
void insert(node head,int X,int Y)
{       
    //node newnode=new LNode;      //LNode Lʵ���������new�����ڴ�ռ䶼����,���ṹָ���Ƕ����ָ��
    LNode L;
    node newnode=&L;
    newnode->data=X;
    node p=head->next;
    int count=1;
    while(p!=NULL)
    {
        count++;
        if(count==Y)
        {
            newnode->next=p->next;
            p->next=newnode;
        }
        p=p->next;
    }
}
//ɾ�������нڵ�
void deletenode(node head,int X)
{
    int i=0;
    node p,p1;
    p=head->next;
    p1=p->next;
    int count=0;
    if(X==1)
    {
        head->next=p1;
    }
    else
    {
        for(i=2;i<X;i++)
        {
           p=p1;
           p1=p1->next;     
        }
        p->next=p1->next;
    }
}
//�����������
void showlist(node head)
{
    node p=head->next;
    while(p!=NULL)
    {
            cout<<p->data<<" \n";  //ִ���˵�һ�Σ��ڶ��ο�ס,���ע��cout��p=p->next˳��
            p=p->next;
    }
}


int main()
{
    LNode L;
    node head=&L;
          //ʵ�����¶���
    Empty(head);
    add(head,10);
    add(head,20);
    add(head,30);
    add(head,40);
    add(head,50);
    insert(head,80,4);
    showlist(head);
    deletenode(head,1);
    cout<<"\n";
    showlist(head);
    cout<<"����Ϊ��"<<length(head)<<endl;
    return 0;
}