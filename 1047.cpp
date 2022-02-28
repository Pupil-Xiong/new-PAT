#include <iostream>
using namespace std;

int main()
{
	int team[1000]={0};
	int id,num=0,score=0,n=0,max=0,maxn=0;
	cin>>n;
	getchar();
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d-%d %d",&num,&id,&score);
		team[num]+=score;
		if(team[num]>max)
		{
			max=team[num];
			maxn=num;
		}
	}
	cout<<maxn<<' '<<max;

	return 0;
}