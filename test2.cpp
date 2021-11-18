#include <iostream>
#include <cstdio>
using namespace std;

bool jud(char a[])
{
	int i=0,j=0;
	int k=0;
	while(a[k]!='\0')
	{
		cout<<"a["<<k<<"]= "<<a[k]<<endl;
		switch(a[k])
		{
			case 'I':i++;break;
			case 'O':j++;break;
		}
		if(j>i)    //判断出栈数量是否有超过入栈数量
			{
				return false;
			}
		k++;
	}
	if(i!=j)    //判断最后是否为空栈
		return false;
	else
		return true;
}

int main()
{
	char a[100];
	scanf("%c",&a[0]);
	int i=0;
	while(a[i]!='\n')
	{	
		i++;
		scanf("%c",&a[i]);
	}
	bool k=jud(a);
	if(k==true)
		cout<<"good\n";
	else
		cout<<"error\n";
	return 0;
}