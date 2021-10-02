#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct PolyNode *Polynomial;   //√ 
typedef struct PolyNode                  
{
	int coef;            //系数
	int exp;			   //指数
	Polynomial next;
}PolyNode;
 
 //创建多项式链表  
 /*解释:
 引入头节点 L，记录链表首位置*/ 
Polynomial CreateList() {             //√ 
	int co;   //系数
	int ex;     //指数
	Polynomial p,L,s;    //定义三个结构体指针 
	L = (Polynomial)malloc(sizeof(PolyNode));   //申请空间给L ，可以看作是创建了一个结构变量XXX
	//即malloc()==PolyNode XXX;
	//L=&XXX; L指向该结构变量 
	L->next=NULL;      //L做头节点，用于后续顺序访问 
	s=L;      //建立s指针，为后续做移动准备 
	int n;
	scanf("%d",&n);
	while(n--){
		p = (Polynomial)malloc(sizeof(PolyNode));    //申请与结构体相同的临时空间 ，用p记录空间的地址 
		scanf("%d%d",&co,&ex);	
		p->coef = co; //将co输入给临时空间的相应位置 
		p->exp = ex; 
		p->next = NULL;  //指向下一个节点的指针为空 
		s->next=p;
		s=p;
	} 
	s->next=NULL;
	return L; 
}

void attach(int c, int e, Polynomial rear)   //√
{
	Polynomial p;
	p = (Polynomial)malloc(sizeof(PolyNode));
	p->coef = c;
	p->exp = e;
	p->next=NULL;
	rear->next = p;
	rear = p;           /*参考创建节点部分 ,即找到最后一个节点的指针域rear,
	                     rear充当原先s的角色,指向下一个节点 */
	//运行结束p指针就被抛弃了 
}

//显示
void Display(Polynomial p){
	Polynomial Pointer;
	Pointer = p;
	if (Pointer == NULL){
		printf("0 0");
	}
	int flag=0;
	while (Pointer != NULL){
		if(flag==0){
			printf("%d %d", Pointer->coef, Pointer->exp);
			Pointer = Pointer->next;
			flag=1;
		}
		else{
			printf(" %d %d", Pointer->coef, Pointer->exp);
			Pointer = Pointer->next;
		}
	} 
}


//多项式相乘
Polynomial LinkMult(Polynomial A, Polynomial B){
  	Polynomial front, rear, t, t1, t2;
	front =(Polynomial)malloc(sizeof(PolyNode));
	front->next = NULL;
	rear = front;
	int c, e;
	t1 = A->next; t2 = B->next;
	if (!t1 || !t2)
		return NULL;
	while (t2){
		c = t1->coef*t2->coef;
		e = t1->exp + t2->exp;
		attach(c, e, rear);
		rear=rear->next;
		t2 = t2->next;
	}
	t1 = t1->next;
	while (t1){
		t2 = B->next;
		rear = front;
		while (t2){
			c = t1->coef*t2->coef;
			e = t1->exp + t2->exp;
			while ((rear->next) && (rear->next->exp > e)){
				rear = rear->next;
			}
			if ((rear->next) && (rear->next->exp == e)){
				if ((rear->next->coef + c) != 0){
					rear->next->coef += c;
				}
				else{
					t = rear->next;
					rear->next = t->next;
					free(t);
				}
			}
			else{
				t = (Polynomial)malloc(sizeof(PolyNode));
				t->coef = c;
				t->exp = e;
				t->next = rear->next;
				rear->next = t;
				rear = rear->next; 
			}
			t2 = t2->next;
		}
		t1 = t1->next;
	}
	t = front;
	front = front->next;
	free(t);
	return front;
}

int compare(int a, int b){
	if (a > b)
		return 1;
	else if (a < b)
		return 0;
	else
		return -1; 
}  
//相加 
Polynomial LinkList(Polynomial A, Polynomial B){
	Polynomial front, rear, t,p1,p2;
	p1=A->next;
	p2=B->next; 
	front =(Polynomial)malloc(sizeof(PolyNode));
	front->next = NULL;
	rear = front;
	int sum = 0;
	if (!p1 && !p2)
		return NULL;
	while (p1&&p2){
		switch (compare(p1->exp, p2->exp)){
		case 1:
			attach(p1->coef, p1->exp, rear);
			rear=rear->next;
			p1 = p1->next;
			break;
		case 0:
			attach(p2->coef, p2->exp, rear);
			rear=rear->next;
			p2 = p2->next;
			break;
		case -1:
			sum = p1->coef + p2->coef;
			if (sum){
				attach(sum, p1->exp, rear);
				rear=rear->next;
			}
			p1 = p1->next;
			p2 = p2->next;
			break;
		}
	}
	for (; p1 != 0;attach(p1->coef, p1->exp, rear),	rear=rear->next, p1 = p1->next);
	for (; p2 != 0;attach(p2->coef, p2->exp, rear),	rear=rear->next, p2 = p2->next);
	t = front;
	front = front->next;
	free(t);
	return front;
}

int main(){
	Polynomial A, B, C,D;
	A = CreateList();
	B = CreateList();
	C=LinkMult(A,B);
	Display(C);
	printf("\n");
	D=LinkList(A,B);
	Display(D);
} 


