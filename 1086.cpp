#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a=0,b=0,i=0;
	int num=0,num1=0,flag=0;;
	vector<int> v;
	cin>>a>>b;
	num=a*b;
	while(num!=0)
	{
		num1=num%10;
		num=num/10;
		if(num1!=0)
			flag=1;
		if(flag==1)
		{
			v.push_back(num1);
			cout<<v[i];
			i++;
		}
	}
	return 0;
}