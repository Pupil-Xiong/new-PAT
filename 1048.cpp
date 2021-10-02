#include <iostream>
#include <string> 
#include <stack> 
using namespace std;

char Jud(int a)
{
    if(a==10)
        return 'J';
    else if(a==11)
        return 'Q';
    else if(a==12)
        return 'K';
}
int main()
{
    string s1;
    string s2;
    stack<char> s3;
    cin>>s1;
    cin>>s2;
    int max=0;
    int min=0;
    int flag=0; 
    char t=0;
    int t1=0;
    int i=0,j=0,k=0;
    if(s1.length()>=s2.length())
    {
		max=s1.length();
        min=s2.length();
        flag=1;
    }
    else
    {
		max=s2.length();
        min=s1.length();
        flag=2;
    }
    for(i=1;i<=max;i++)
    {
    	j=s1.length()-i;
    	k=s2.length()-i;
    	if(i<=min)
        {
			if(i%2!=0)//ÆæÊý
	        {
	        	t1=(s1[j]-'0'+(s2[k]-'0'))%13;
	        	if(t1>9)
					t=Jud(t1);
	            else 
					t=t1+'0';
	           s3.push(t);
	        }
	        else if(i%2==0)  //Å¼Êý 
	        {
	            t1=s2[k]-'0'-(s1[j]-'0');
	            if(t1<0)
	           {
				t1+=10;
				t=t1+'0';
	             s3.push(t);
	           }
	            else
	            {
	              s3.push(t1+'0');
	            }
	        }
    	}
    	else
		{
			if(flag==1)
				s3.push(s1[j]);
			else if(flag==2)
				s3.push(s2[k]);
		} 
    }
    while(!s3.empty())
     {
	 cout<<s3.top();
	 s3.pop();
 }
    return 0;
}
