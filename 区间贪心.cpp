#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn=100;
struct Inteval
{
	int x;
	int y;

}I[maxn];   //创建maxn个结构变量

bool cmp(Inteval a,Inteval b)
{
	if(a.x!=b.x)
		return a.x>b.x;  //左端点从大到小
	else
		return a.y<b.y;  //左端点相同，按右端点从小到大
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&I[i].x,&I[i].y);
		}
		sort(I,I+n,cmp);    //区间排序
		scanf("%d",&n);
		int ans=1;
		int lastX=I[0].x;
		for(int i=0;i<n;i++)
		{
			if(I[i].y<=lastX)
			{
				lastX=I[i].x;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}