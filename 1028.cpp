//超过200，出生在2014之后
#include <iostream>
#include <string>

using namespace std;

typedef struct inform
{
	string name;
	int year;
	int month;
	int day;
	bool f;
}Inform;

bool valid(int a,int b,int c)
{
	if(a>2014||a<1814)
		return false;
	else if(a<2014&&a>1814)
		return true;
	else if(a==2014)
	{
		if(b<9&&b>0)
			return true;
		else if(b==9)
		{
			if(c<=6&&c>0)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else if(a==1814)
	{
		if(b>9&&b<=12)
			return true;
		else if(b==9)
		{
			if(c>6&&c<=31)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else 
		return false;
}

int main()
{
 int n=0,i=0;
 int count=0;
 string maxn;
 string minn;
 int y,m,d;
 bool flag;
 Inform max={maxn,2014,9,6,true};
 Inform min={minn,1814,9,6,true};
 cin>>n;
 for(;i<n;i++)
 {
 	Inform k[i];
 	cin>>k[i].name;
 	scanf("%d/%d/%d",&y,&m,&d);
 	k[i].year=y;
 	k[i].month=m;
 	k[i].day=d;
 	flag=valid(y,m,d);
 	k[i].f=flag;
	if(flag==true)
	{
		count++;
		if(k[i].year<max.year)
			max=k[i];
		else if(k[i].year==max.year)
		{
			if(k[i].month<max.year)
				max=k[i];
			else if(k[i].month==max.month)
			{
				if(k[i].day<max.day)
					max=k[i];
			}
		}
		if(k[i].year>min.year)
			min=k[i];
		else if(k[i].year==min.year)
		{
			if(k[i].month>min.year)
				min=k[i];
			else if(k[i].month==min.month)
			{
				if(k[i].day>min.day)
					min=k[i];
			}
		}
	}
 }
 for(int l=0;l<i;l++)
 {
 	cout<<k[l].f<<endl;
 }
 cout<<count<<" "<<max.name<<" "<<min.name;
	return 0;
}