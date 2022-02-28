#include <iostream>
using namespace std;

int main()
{
	int n=0,i=0,max=-1,min=1001,y=0,solv=0;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>y;
		if(y<min)
			min=y;
	}
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>y;
		if(y>max)
			max=y;
	}
	if(min-max>0)
		cout<<"Yes"<<' '<<min-max;
	else 
	{
		solv=max-min+1;
		cout<<"No"<<' '<<solv;
	}

	return 0;
}