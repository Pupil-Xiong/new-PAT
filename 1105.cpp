#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int first1,first2,n=0,i=0,num=0,temp=0,j=0;
	cin>>first1>>first2>>n;
	vector<int> data(100000),next(100000),list1,list2;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>num>>data[num]>>next[num];
	}
	while(first1!=-1)
	{
		list1.push_back(first1);
		first1=next[first1];
	}
	while(first2!=-1)
	{
		list2.push_back(first2);
		first2=next[first2];
	}
	 if(list1.size()>=2*list2.size())
	{
		temp=list1.size()/list2.size();
		reverse(list2.begin(),list2.end());
		i=temp;
		for(;i<list1.size();i+=temp)
		{
			list1.insert(list1.begin()+i,list2[j]);
			i++;
			j++;
			if(j==list2.size())
				break;
		}
		i=0;
		while(list1[i]!=0)
		{
			if(list2[i+1]!=0)
				printf("%05d %d %05d\n",list1[i],data[list1[i]],list1[i+1]);
			if(list1[i+1]==0)
				printf("%05d %d -1",list1[i],data[list1[i]]);
			i++;
		}
	}
	 else if(list2.size()>=2*list1.size())
	{
		temp=list2.size()/list1.size();
		reverse(list1.begin(),list1.end());
		i=temp;
		for(;i<list2.size();i+=temp)
		{
			list2.insert(list2.begin()+i,list1[j]);
			i++;
			j++;
			if(j==list1.size())
				break;
		}
		i=0;
		while(list2[i]!=0)
		{
			if(list2[i+1]!=0)
				printf("%05d %d %05d\n",list2[i],data[list2[i]],list2[i+1]);
			else if(list2[i+1]==0)
				printf("%05d %d -1",list2[i],data[list2[i]]);
			i++;
		}
	}
	return 0;
}