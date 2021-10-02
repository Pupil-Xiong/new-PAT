#include <iostream>
using namespace std;

int Jud(double a)
{
	int b=0;
	b=a*1000;
	if(a>1000||a<-1000)
		return 1;
	else if(a*1000!=b)
		return 1;
	else 
		return 2;
}
int main()
{
	int n=0;
	double a[100];
	int k=0;
	double count=0;
	double sum=0;
	double aver=0;
	string s[100];
	cin>>n;
	getchar();
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		k=Jud(a[i]);
		if(k==2)
		{
			count++;
			sum+=a[i];
		}
		else if(k==1)
			cout<<"ERROR: "<<s[i]<<" is not a legal number"<<endl;
			cout<<a[i]<<endl;
	}
	aver=sum/count;
	printf("The average of %f numbers is %f",count,aver);
}
