#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string s1;
	int n=0;
	int i=0;
	cin>>s>>n;
	getchar();
	getline(cin,s1);
	while(s1!="#")
	{
		i++;
		if(s1==s)
			{
				cout<<"Welcome in";
				return 0;
			}
		else if(s1!=s)
			{
				cout<<"Wrong password: "<<s1<<endl;
			}
		if(i==n)
		{
			cout<<"Account locked";
			return 0;
		}
		getline(cin,s1);
	}
	return 0;
}
