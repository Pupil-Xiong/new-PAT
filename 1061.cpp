#include <iostream>
using namespace std;

int main()
{
	int n=0,m=0;
	int i=0,j=0;
	int score[100];
	int answer[100];
	int stu[100]={0};
	int sum[100]={0};
	cin>>n>>m;
	getchar();
	for(i=0;i<m;i++)
	{
		cin>>score[i];
	}
	getchar();
	for(i=0;i<m;i++)
	{
		cin>>answer[i];
	}
	for(j=0;j<n;j++)
	{
		getchar();
		for(i=0;i<m;i++)
		{
			cin>>stu[i];
			if(stu[i]==answer[i])
			{
				sum[j]+=score[i];
			}
		}
		cout<<sum[j]<<endl;
	}
	return 0;
}