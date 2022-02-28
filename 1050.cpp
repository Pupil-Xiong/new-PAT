#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int N=0,n=0,m=0,i=0,j=0,s=0;
    cin>>N;
    int a[10001];
    int dx[4]={0,-1,0,1};
    int dy[4]={1,0,-1,0};
    int b[10000][100]={0};
    getchar();
    for(i=0;i<N;i++) 
        cin>>a[i];
    sort(a,a+N,cmp);
    s=sqrt(N);
    for(i=1;i<=s;i++)
        if(N%i==0) 
            n=i;
    m=N/n;
    int x=m-1,y=0,d=0;
    for(i=0;i<N;i++)
    {
        b[x][y]=a[i];
        if(x+dx[d]<0||y+dy[d]>=n||y+dy[d]<0||b[x+dx[d]][y+dy[d]])
            d=(d+1)%4;
        x+=dx[d];
        y+=dy[d];
    }
    for(i=m-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j];
            if(j!=n-1)
                cout<<' ';
        }
        if(i!=0)
            cout<<endl;
    }
    return 0;
}