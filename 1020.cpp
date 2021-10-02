/*给定所有种类月饼的库存量、总售价、以及市场的最大需求量
请你计算可以获得的最大收益是多少。*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double max(double x,double y,double z){
	int max1=0;
	if(x>=y)
	max1=x;
	else
	max1=y;
	if(max1<z)
	max1=z;
	return max1;
}
int main(){
	int n=0,D=0;
	double a[1001],b[1001];
	int c=0;
	int i=0,j=0;
	int sum=0;
	double sin[1001];
	cin>>n>>D;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		sin[i]=b[i]/a[i];
		cout<<sin[i]<<endl;
	}
	max1(sindouble)
	system("pause");
	return 0;
} 
