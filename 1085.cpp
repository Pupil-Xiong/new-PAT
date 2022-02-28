#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct
{
	string id;
	int score;
	string name;
}person;

typedef struct 
{
	string name;
	int sum;
	int num;
}school;

bool cmp(school a,school b)
{
	if(a.sum!=b.sum)
	{
		return a.sum>b.sum;
	}
	else
	{
		if(a.num!=b.num)
			return a.num<b.num;
		else
			return a.name<b.name;
	}
}

int main()
{
	person p[105];
	school temp;
	vector<school> sch1;

	int n=0;
	cin>>n;
	int i=0,j=0;
	int sum1=0;
	for(i=0;i<n;i++)
	{
		sum1=0;
		getchar();
		cin>>p[i].id>>p[i].score>>p[i].name;
		transform(p[i].name.begin(),p[i].name.end(),p[i].name.begin(),::tolower);
		switch(p[i].id[0])
		{
			case 'B': sum1=p[i].score/1.5;break;
			case 'A': sum1=p[i].score;break;
			case 'T': sum1=p[i].score*1.5;break;
		}

		if(sch1.size()==0)
		{
			temp.name=p[i].name;
			temp.sum=sum1;
			temp.num=1;
			sch1.push_back(temp);
			continue;
		}
		for(j=0;j<sch1.size();j++)
		{
			if(p[i].name==sch1[j].name)
			{
				sch1[j].sum+=sum1;
				sch1[j].num++;
				break;
			}
			else if(j==(sch1.size()-1))
			{
				temp.name=p[i].name;
				temp.sum=sum1;
				temp.num=1;
				sch1.push_back(temp);
				break;
			}
		}
	}
	sort(sch1.begin(),sch1.end(),cmp);
	int count=1;
	int count1=1;
	cout<<sch1.size()<<endl;
	for(i=0;i<sch1.size();i++)
	{
		count1++;
		cout<<count<<' '<<sch1[i].name<<' '<<sch1[i].sum<<' '<<sch1[i].num<<endl;
		if(sch1[i].sum!=sch1[i+1].sum)
			count=count1;
	}
	return 0;
}