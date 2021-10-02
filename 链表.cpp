#include <iostream>
#include <string>
using namespace std;

typedef struct PolyNode *Polynomial;   //定义一种快速结构定义，
/*Polynomial XXX 等价于PolyNode *XXX 
   即定义了一个指向PolyNode的指针   */
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
