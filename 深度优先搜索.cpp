#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

const int maxn=30;
int n,V,maxValue=0;   //物品件数，背包容量，最大价值
int w[maxn],c[maxn];   //每件物品重量，每件物品价值

void DFS(int index,int sumW,int sumC)
{
	cout<<"收到返回/开始\n";
	if(index==n)
	{
		if(sumW<=V&&sumC>maxValue)
		{
			maxValue=sumC;
		}
		cout<<"成立\n";
		return;
	}
	cout<<"递归0"<<"  "<<"进入DFS1"<<endl;
	DFS(index+1,sumW,sumC);   //DFS1

	cout<<"结束DFS1"<<"  递归1"<<"  进入DFS2"<<endl;
	DFS(index+1,sumW+w[index],sumC+c[index]);  //DFS2

	cout<<"结束DFS2"<<"  递归2"<<"  结束"<<endl;
	return;    //return可省略，C++会自动补上
}

int main()
{
	scanf("%d%d",&n,&V);

	for(int i=0;i<n;i++)  scanf("%d",&w[i]);
	for(int i=0;i<n;i++)  scanf("%d",&c[i]);

	DFS(0,0,0);

	printf("%d\n",maxValue);
	return 0;
}