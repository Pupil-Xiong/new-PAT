#include <iostream>
#include <string>
using namespace std;

typedef struct
{
	int num;
	int score;
}person;

int main()
{
	person p[100000];
	int s[100000]={0};
	int count=0;
	int i=0;
	person max={0,0};
	cin>>count;
	for(i=0;i<count;i++)
	{
		getchar();
		cin>>p[i].num>>p[i].score;
		s[p[i].num]+=p[i].score;
		if(max.score<=s[p[i].num])
		{
			max.score=s[p[i].num];
			max.num=p[i].num;
		}
	}
	cout<<max.num<<' '<<max.score;
	return 0;
}