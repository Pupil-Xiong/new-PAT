#include <iostream>
#include <string>
using namespace std;

typedef struct PolyNode *Polynomial;   //����һ�ֿ��ٽṹ���壬
/*Polynomial XXX �ȼ���PolyNode *XXX 
   ��������һ��ָ��PolyNode��ָ��   */
struct PolyNode
{
	int a=0;
	int b=0;
	Polynomial link;
}
int main()
{
	return 0;
}
