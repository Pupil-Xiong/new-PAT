#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n=0;
    char c;
    int i=0,j=0,k=0;
    double t=0;
    cin>>n;
    cin>>c;
    for(i=0;i<n;i++)
        cout<<c;
    cout<<endl;
    t=i%2/2.0;        //注意需要2.0和double类型 
    if(t<0.5)
        k=i/2;
    else if(t>=0.5)
        k=i/2+1;
    for(j=0;j<k-2;j++)
    {
        cout<<c;
        for(i=0;i<(n-2);i++)
        {
            cout<<" ";
        }
        cout<<c;
        cout<<endl;
    }
    for(i=0;i<n;i++)
        cout<<c;
}
