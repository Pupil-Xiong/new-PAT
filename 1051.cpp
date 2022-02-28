#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r1,p1,r2,p2,sum1=0,sum2=0;
	cin>>r1>>p1>>r2>>p2;
	sum1=r1*r2*cos(p2)*cos(p1)-r1*r2*sin(p2)*sin(p1);
	sum2=r1*r2*cos(p1)*sin(p2)+r1*r2*sin(p1)*cos(p2);
	if(sum1<0&&sum1+0.005>=0)
		cout<<"0.00";
	else
		printf("%.2f",sum1);
	if(sum2<0&&sum2+0.005>=0)
		cout<<"+0.00i";
	else if(sum2>=0)
		printf("+%.2fi",abs(sum2));
	else
		printf("%.2fi",sum2);
	return 0;
}