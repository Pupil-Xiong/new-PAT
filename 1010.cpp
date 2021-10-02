#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	cin>>a>>b;
	if(b==0)
	cout<<"0 0";
	else 
	cout<<a*b<<" "<<b-1;
	while(cin>>a>>b)
	if(b!=0)
	cout<<" "<<a*b<<" "<<b-1;
	return 0; 
}
