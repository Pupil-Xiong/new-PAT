#include <iostream>
#include <string>
using namespace std;
class person {
public:
    string id;
    int hh=0;
    int mm=0;
    int ss=0;
    int time=0;
};
int main(){
   class person a[10];
   int num=0;
   int max=0,m=0; 
   cin>>num;
   for(int i=0;i<num;i++)
   {
      for(int j=0;j<4;j++)
      {
         cin>>a[i].id>>a[i].hh>>a[i].mm>>a[i].ss;
         cout>>" ">>a[i].hh>>endl;
      }
   }
    return 0;
}