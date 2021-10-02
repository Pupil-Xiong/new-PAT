#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    int i=0,j=0;
    int flag1=0;
    cin>>s1;    //现有的
    getchar();
    cin>>s2;    //需要的
    for(i=0;i<s1.length();i++)
    {
        for(j=0;j<s2.length();j++)
        {
			  if(s1[i]==s2[j])
            {
                s1.erase(i,1);  //删除相同的
                s2.erase(j,1);  //删除相同的 
				i--;         //erase特性，删除后，序号会向前移动，所以需要继续比较此位 
				break;         //不要忽略删除后无需继续往下比较 
            }
        }
    }
    if(s2.empty())
    {
        cout<<"Yes ";
        cout<<s1.length();
    }
    else
    {
        cout<<"No ";
        cout<<s2.length();
    }
    return 0;
}
