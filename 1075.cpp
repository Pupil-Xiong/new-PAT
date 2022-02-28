#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int first=0,n=0,k=0,num=0;
	int i=0,j=0;
	vector<int> v(100001),data(100001),list,list1,inside,plus;
	cin>>first>>n>>k;
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
	for(i=0;i<list.size();i++)
	{
		if(data[list[i]]<0) list1.push_back(list[i]);
		else if(data[list[i]]<=k)  inside.push_back(list[i]);
		else plus.push_back(list[i]);
	}
	for(i=0;i<inside.size();i++)
		list1.push_back(inside[i]);
	for(i=0;i<plus.size();i++)
		list1.push_back(plus[i]);
	for(i=0;i<list1.size();i++)
	{
		if(i==list1.size()-1)
			printf("%05d %d -1",list1[i],data[list1[i]]);
		else
			printf("%05d %d %05d\n",list1[i],data[list1[i]],list1[i+1]);
	}
	return 0;
}