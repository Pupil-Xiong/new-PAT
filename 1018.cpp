#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int jud(int a,int b){
	int c=0;
	c=a-b;
	switch(c){
		case -1: return 1;break;
		case 1: return 0;break;
		case -7: return 1;break;
		case 7: return 0;break;
		case -8: return 0;break;
		case 8: return 1;break;
		case 0: return 2;break;
	}
} 
int maxi(int e,int f,int g){
	int m=0;
	if(e-f>=0)
		{m=0;
		if(e-g<=0)
		m=2;
		}
    else
    	{
			m=1;
			if(f-g<=0)
			m=2;
		}
		return m;
}
int main(){
	int n=0;
	int i=0;
	char x=0,y=0;
	int k=0;
	int count[3]={0};
	int max=0,max1=0,max2=0;
	int min=0,min1=0,min2=0;
	int q=0,v=0;
	string z[3]={"C","J","B"};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		k=jud(x,y);
		if(k==0)
		{
			count[0]++;  //输 
			if(y=='C')   //乙赢的时候字符次数 
				max++;
			else if(y=='J')
				max1++;
			else if(y=='B')
				max2++;
		}
		else if(k==1)
			{
				count[1]++;   //赢 
			if(x=='C')   //甲赢的时候字符次数 
				min++;
			else if(x=='J')
				min1++;
			else if(x=='B')
				min2++;
			}
		else if(k==2) 
			count[2]++;  //平局 
    }
    	q=maxi(max,max1,max2);
    	v=maxi(min,min1,min2);
    	cout<<count[1]<<" "<<count[2]<<" "<<count[0]<<endl;
    	cout<<count[0]<<" "<<count[2]<<" "<<count[1]<<endl;
    	cout<<z[v]<<" "<<z[q];
    return 0;
} 
