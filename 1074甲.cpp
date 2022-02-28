#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n=0,k=0,first=0,i=0,j=0,num=0;
    cin>>first>>n>>k;
    vector<int> v(100005),data(100005),list;
    for(i=0;i<n;i++)
    {
        getchar();
        cin>>num>>data[num]>>v[num];
    }
    num=first;
    while(num!=-1)
    {
        list.push_back(num);
        num=v[num];
    }
    for(i=0;i<(list.size()-list.size()%k);i+=k)   //记得用list.size()，题目的n可能比真实能连接的节点数多
        reverse(list.begin()+i,list.begin()+i+k);
    for(i=0;i<list.size()-1;i++)
        printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
    printf("%05d %d -1",list[i],data[list[i]]);
return 0;
}