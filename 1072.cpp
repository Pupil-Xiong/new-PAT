#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n=0,m=0;
	cin>>n>>m;
	getchar();
	int i=0,j=0,k=0;
	int x[6],y[10];
	int count=0;
	int cc=0,cc1=0,cc2=0;
	string name;
	for(i=0;i<m;i++)
		cin>>x[i];
	getchar();
	for(i=0;i<n;i++)
	{
		cin>>name>>count;
		for(j=0;j<count;j++)
		{
			cin>>y[j];
			for(k=0;k<m;k++)
			{
				if(y[j]==x[k])
				{
					cc++;
					if(cc==1)
						cout<<name<<':';
					printf(" %.4d",y[j]);
					break;
				}
			}
		}
		if(cc!=0)
		{
			cout<<endl;
			cc1++;
			cc2+=cc;
		}
		cc=0;
		getchar();
	}
	cout<<cc1<<' '<<cc2;

	return 0;
}