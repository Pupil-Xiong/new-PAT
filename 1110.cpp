#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> ad(100001),data(100001),list;
	int first=0,n=0,k=0,i=0,j=0,num=0;
	cin>>first>>n>>k;
	for(i=0;i<n;i++)
	{
		getchar();
		cin>>num>>data[num]>>ad[num];
	}
	num=first;
	while(num!=-1)
	{
		list.push_back(num);
		num=ad[num];
	}
	for (int i = 0; i < list.size(); i += k)
		reverse(list.begin() + i, min(list.begin() + i + k, list.end()));
	reverse(list.begin(), list.end());
	for (int i = 0; i < list.size() - 1; i++) 
		printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
	printf("%05d %d -1\n", list[list.size() - 1], data[list[list.size() - 1]]);
	return 0;
}