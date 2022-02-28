#include <iostream>
#include <string>
using namespace std;

int main()
{
	string id[100];
	int num[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string M={'1','0','X','9','8','7','6','5','4','3','2'};
	int num1=0,i=0,j=0;
	int sum=0;
	int count=1;
	cin>>num1;
	for(i=0;i<num1;i++)
	{
		sum=0;
		getchar();
		cin>>id[i];
		for(j=0;j<17;j++)
		{	
			sum+=(id[i][j]-'0')*num[j];
		}
		sum%=11;
		if(id[i][17]!=M[sum])
		{
			cout<<id[i]<<endl;
			count*=0;
		}
	}
	if(count!=0)
		cout<<"All passed";
	return 0;
}