#include <iostream>
#include <string>
using namespace std;
 
 int main()
 {
 	string A;
 	string B;
 	string C;
 	getline(cin,A);
 	getline(cin,B);
 	int i=0,j=0;
 	for(i=0;i<A.length();i++)
 	{
 		if(C.find(A[i]) ==A.npos)  //Ã»ÕÒµ½ 
 		{
			 	C.push_back(A[i]);
 		}
	}
	for(i=0;i<B.length();i++)
	{
		if(C.find(B[i])==-1)
			C.push_back(B[i]);
	}
 	cout<<C;
 	return 0;
  } 
