#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
const int maxn=100;
struct node
{
	int x,y;   //定义坐标结构
}Node;

int n,m;
int maxtrix[maxn][maxn]; //二维数组
bool inq[maxn][maxn]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y)
{
	if(x>=n||x<0||y>=m||y<0) return false;
	if(matrix[x][y]==0)  return false;  //如果当前位置数字为0
	if(inq[x][y]==true)  return false;  //已经访问过

	return true;
}

void BFS(int x,int y)
{
	queue<node> Q;  //定义队列
	Node.x=x;
	Node.y=y;
	Q.push(Node);  //队列加入结构
	inq[x][y]=true;  //入队后做标记
	while(!Q.empty())   //判空
	{
		node top=Q.front();  //取出队首元素，放入结构体
		Q.pop();    //队首元素出栈
		for(int i=0;i<4;i++)
		{
			int newX=top.x+X[i];
			int newY=top.y+Y[i];
			if(judge(newX,newY))
			{
				Node.x=newX,Node.Y=newY;
				Q.push(Node);
				inq[newX][newY]=true;
			}
		}
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<m;y++)
		{
			scanf("%d",&matrix[x][y]);
		}
	}
	int ans=0;  //存放块数
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<m;y++)
		{
			if(matrix[x][y]==1&&inq[x][y]==false)
			{
				ans++;
				BFS(x,y);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}