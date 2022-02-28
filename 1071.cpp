#include <iostream>
using namespace std;

typedef struct game
{
	int num,t=0,num1;
	bool b;
}game;

int jud(int a,int b)
{
	if(a>b) return 1;
	else if(a<b) return 0;
	else return -1;
}

int main()
{
	int sum=0,K=0,i=0;
	cin>>sum>>K;
	game g[K];
	for(i=0;i<K;i++)
	{
		getchar();
		cin>>g[i].num>>g[i].b>>g[i].t>>g[i].num1;
		if(g[i].t>sum)
			cout<<"Not enough tokens.";
		else if(jud(g[i].num1,g[i].num)==g[i].b)
		{
			sum+=g[i].t;
			cout<<"Win "<<g[i].t<<"!";
		}
		else
		{
			sum-=g[i].t;
			cout<<"Lose "<<g[i].t<<".";
		}
		cout<<"  Total = "<<sum<<".";
		if(i!=K-1)
			cout<<endl;
		if(sum==0)
		{
			cout<<"Game Over.";
			break;
		}
	}
	return 0;
}