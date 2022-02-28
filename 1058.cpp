#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct 
{
	int score,correct;
	string s;
}answer;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int n=0,m=0,i=0,j=0,k=0,temp=0;
	int person[1000]={0};
	vector<int> wrong(1000),wrong1(1000);
	string s1;
	char ch;
	cin>>n>>m;
	answer a[m];	
	for(i=0;i<m;i++)
	{
		getchar();
		cin>>a[i].score>>temp>>a[i].correct;
		for(j=0;j<a[i].correct;j++)
		{
			cin>>ch;
			a[i].s+=ch;
		}
	}
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<m;j++)
		{
			scanf("(%d",&temp);
			s1.clear();
			for(k=0;k<temp;k++)
			{
				cin>>ch;
				s1+=ch;
			}
			if(j==m-1)
				scanf(")");
			else
				scanf(") ");
			if(temp==a[j].correct&&s1==a[j].s)
					person[i]+=a[j].score;
			else wrong[j]++;
		}
	}
	wrong1=wrong;
	sort(wrong1.begin(),wrong1.end(),cmp);
	for(i=0;i<n;i++) cout<<person[i]<<endl;
	if(wrong1[0]==0)
		cout<<"Too simple";
	else 
	{
		cout<<wrong1[0];
		for(i=0;i<m;i++)
			if(wrong[i]==wrong1[0]&&wrong1[0]!=0)
				cout<<' '<<i+1;
	}
	return 0;
}