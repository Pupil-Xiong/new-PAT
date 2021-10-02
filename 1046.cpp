#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int i=0,j=0;
    int temp=0;
    int a[4]={0};
    int count1=0;
    int count2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
			cin>>a[j];     //注意循环读入问题 
		}
            temp=a[0]+a[2];
            if(temp==a[1]&&temp!=a[3])//甲赢，乙输
            {
                count2++;
            }
            else if(temp!=a[1]&&temp==a[3])
            {
                count1++;
            }
    }
     cout<<count1<<" "<<count2;
    return 0;
}
