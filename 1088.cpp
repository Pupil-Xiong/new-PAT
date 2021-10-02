#include <iostream>
#include <string>
using namespace std;

int Jud(double a,double b)    //函数里的int类型也要改 
{
	if(a==b)
		return 0;
	else if(a>b)
		return 1;
	else if(a<b)
		return 2;
}
int main()
{
    int i=0,j=0;
    double m=0;
    int x=0;
	double y=0;
    double a=0;
	double b=0;
	double c=0;
	int s[3];
    int t1=0,t2=0;
    int t3=0;
    int flag=0;
    int k=0;
    cin>>m;
    cin>>x;
    cin>>y; 
    for(i=9;i>0;i--)
    {
        for(j=9;j>=0;j--)
        {
        	a=i*10+j;   //甲 
    		b=j*10+i;   //乙 
            if(a>=b)
            {
            	t1=a*b;
            	t2=(x+y)*b;
            	t3=y*a;
                if(t2==t3)
                {
					flag++;
                	break;
                }
            }
            else if(a<b)
            {
           	    t1=a*b;
            	t2=(y-x)*b;
            	t3=y*a;
            	if(t2==t3)
            	{
					flag++;
            		break;
            	}
			}
        }
        if(flag!=0)
        	break;
    }
    if(flag!=0)
    {
		c=b/y;
	    cout<<a<<" ";
	    s[0]=Jud(m,a);
		s[1]=Jud(m,b);
		s[2]=Jud(m,c);
		for(k=0;k<3;k++)
		{
			if(s[k]==0)
				cout<<"Ping";
			else if(s[k]==1)
				cout<<"Gai";
			else if(s[k]==2)
				cout<<"Cong";
			if(k!=2)
			cout<<" ";
		}
	}
	else if(flag==0)
	{
    	cout<<"No Solution";
	}
    return 0;
}
