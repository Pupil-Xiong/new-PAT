#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
const int maxn;

struct node   //构造结点结构
{
	int x,y;

}Node;

int n,m;      //矩阵大小n*m

int matrix[maxn][maxn];   //矩阵对应的值

bool inq[maxn][maxn];     //记录位置(是否入过队)

int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y)
{
	if(x>=n||x<0||y>=m||y<0) return false;
	if(matrix[x][y]==0||inq[x][y]==true)  return false;
	return true;
}

void BFS(int x,int y)
{
	queue<node> Q;
	Node.x=x;
	Node.y=y;
	Q.push(Node);
	inq[x]
}

int main()
{


	return 0;
}