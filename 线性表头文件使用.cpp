#include <iostream>
#include <list>      //���Ա�STL 
using namespace std;
int main(){
	list<int>a;
	int *L;
	InitList(*L);
	bool p;
	p=ListEmpty(L);
	cout<<p;
	return 0;
} 
