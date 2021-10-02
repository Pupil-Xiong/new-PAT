#include <iostream>     //此题容易超时，注意用数组来记录次数，数组有现成的下标 
#include <string>
#define Max 100000
using namespace std;
int main()
{
    int n=0;
    int t=0;
    int a[Max]={0};
    int k=0;
    int i=0;
    int count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;   //找一个临时中间变量
        a[t]+=1;   //a[60]=1
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>t;
        cout<<a[t];
        if(i!=k-1)
        {
            cout<<" ";
        }
    }
    return 0;
}
