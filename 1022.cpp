#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main()
{
	int a=0,b=0,d=0;
	int i=0,j=0;
	int count=0;
	int shang=0,rest=0;
	stack<int> st;
	cin>>a>>b>>d;
	shang=a+b;
	if(shang==0)
		cout<<'0';  //不要遗漏
	while(shang!=0)
	{
		rest=shang%d;
		shang=shang/d;
		st.push(rest);
	}
	count=st.size();
	for(i=0;i<count;i++)
	{
		cout<<st.top();
		st.pop();
	}
	return 0;
}