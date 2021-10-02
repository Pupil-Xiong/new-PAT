#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct PolyNode *Polynomial;   //�� 
typedef struct PolyNode                  
{
	int coef;            //ϵ��
	int exp;			   //ָ��
	Polynomial next;
}PolyNode;
 
 //��������ʽ����  
 /*����:
 ����ͷ�ڵ� L����¼������λ��*/ 
Polynomial CreateList() {             //�� 
	int co;   //ϵ��
	int ex;     //ָ��
	Polynomial p,L,s;    //���������ṹ��ָ�� 
	L = (Polynomial)malloc(sizeof(PolyNode));   //����ռ��L �����Կ����Ǵ�����һ���ṹ����XXX
	//��malloc()==PolyNode XXX;
	//L=&XXX; Lָ��ýṹ���� 
	L->next=NULL;      //L��ͷ�ڵ㣬���ں���˳����� 
	s=L;      //����sָ�룬Ϊ�������ƶ�׼�� 
	int n;
	scanf("%d",&n);
	while(n--){
		p = (Polynomial)malloc(sizeof(PolyNode));    //������ṹ����ͬ����ʱ�ռ� ����p��¼�ռ�ĵ�ַ 
		scanf("%d%d",&co,&ex);	
		p->coef = co; //��co�������ʱ�ռ����Ӧλ�� 
		p->exp = ex; 
		p->next = NULL;  //ָ����һ���ڵ��ָ��Ϊ�� 
		s->next=p;
		s=p;
	} 
	s->next=NULL;
	return L; 
}

void attach(int c, int e, Polynomial rear)   //��
{
	Polynomial p;
	p = (Polynomial)malloc(sizeof(PolyNode));
	p->coef = c;
	p->exp = e;
	p->next=NULL;
	rear->next = p;
	rear = p;           /*�ο������ڵ㲿�� ,���ҵ����һ���ڵ��ָ����rear,
	                     rear�䵱ԭ��s�Ľ�ɫ,ָ����һ���ڵ� */
	//���н���pָ��ͱ������� 
}

//��ʾ
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


//����ʽ���
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
//��� 
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


