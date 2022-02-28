#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n=0;
	int i=0,k=0,count=1;
	string s;
	string s1;
	cin>>s>>n;
	cout<<s<<endl;
	for(i=0;i<n;i++)
	{
		cout<<s.length()<<endl;
		for(k=0;k<s.length();k++)
		{
			// cout<<temp<<endl;
			if(k!=s.length()-1)
			{
				if(s[k]==s[k+1])
				{
					count++;
					cout<<"s[k]= "<<s[k]<<endl;
					cout<<"count= "<<count<<endl;
				}
				else
				{
					cout<<"s[k]= "<<s[k]<<endl;
					s1+=s[k];
					s1+=to_string(count-'0');
					count=1;
				}
			}
			else
			{
				s1+=s[k];
				s1+=to_string(count-'0');
			}
		}
		s=s1;
		s1.clear();
		// cout<<s1<<endl;
	}
	// cout<<s;
	return 0;
}