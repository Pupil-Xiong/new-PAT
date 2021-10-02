//链表实现
#include <iostream>
using namespace std;

typedef struct LNode *node;

//构造链表节点
typedef struct LNode
{
    int data;
    node next;
}LNode;

//建立空表
void Empty(node head)
{
    head->next=NULL;
    head->data=-1;
}

//计算链表长度
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


//尾接新节点
void add(node head,int X)
{
    node p=head;
    node p1=head->next;
    node newnode=new LNode;  //申请内存
    newnode->data=X;
    while(p1!=NULL)
    {
        p=p1;
        p1=p1->next;
    }
    p->next=newnode;
    newnode->next=NULL;
}
//中间插入节点
void insert(node head,int X,int Y)
{       
    //node newnode=new LNode;      //LNode L实例化对象或new申请内存空间都可以,即结构指针是对象的指针
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
//删除链表中节点
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
//遍历输出链表
void showlist(node head)
{
    node p=head->next;
    while(p!=NULL)
    {
            cout<<p->data<<" \n";  //执行了第一次，第二次卡住,解决注意cout和p=p->next顺序
            p=p->next;
    }
}


int main()
{
    LNode L;
    node head=&L;
          //实例化新对象
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
    cout<<"长度为："<<length(head)<<endl;
    return 0;
}