#include <iostream>
#include <string>
using namespace std;
int main(){
	char a[6]={'a','b','c','d','e','\0'};
	int i=0;
	for(i=0;i<5;i++)
		cout<<a[i]<<" ";
	return 0; 
} 
