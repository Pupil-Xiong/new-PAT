#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int c1,c2,sum;
	double sum1;
	int hh,mm,ss;
	cin>>c1>>c2;
	sum1=(c2-c1)/100.0;
	sum=(int)(sum1+0.5);
	hh=sum/3600;
	sum%=3600;
	mm=sum/60;
	ss=sum%60;
	printf("%02d:%02d:%02d",hh,mm,ss);  //%02d,%.2d
	return 0;
}