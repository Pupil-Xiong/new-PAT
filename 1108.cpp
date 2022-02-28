#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string s;
	map<char,int> mp;
	int sum=-1;
	string s1={"String"};
	cin>>s;
	int i=0;
	for(i=0;i<s.length();i++)
		mp[s[i]]++;
	while(sum!=0)
	{
		sum=0;
		for(i=0;i<s1.length();i++)
		{
			if(mp[s1[i]]>0)
			{
				cout<<s1[i];
				mp[s1[i]]--;
			}
			sum+=mp[s1[i]];
		}
	}
	return 0;
}