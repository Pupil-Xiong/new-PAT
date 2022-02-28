#include <iostream>
#include <string>
using namespace std;

typedef struct {
  string name;
  int yy, mm, dd;
} person;

bool legal(int a, int b, int c) {
  if (a < 1814 || a > 2014)
    return false;
  else if (a == 1814) {
    if (b < 9)
      return false;
    else if (b == 9 && c < 6)
      return false;
    else
      return true;
  } 
  else if (a == 2014) {
    if (b > 9)
      return false;
    else if (b == 9 && c > 6)
      return false;
    else
      return true;
  } 
  else
    return true;
}

int maxm(person e,int d,person max)  //年长
{
  if (e.yy<max.yy)
    return d;
  else if(e.yy==max.yy)
  {
    if(e.mm<max.mm)
      return d;
    else if(e.mm==max.mm&&e.dd<max.dd)
      return d;
  }
  return -1;
}

int minm(person e,int d,person min)  //年轻
{
  if (e.yy>min.yy)
    return d;
  else if(e.yy==min.yy)
  {
    if(e.mm>min.mm)
      return d;
    else if(e.mm==min.mm&&e.dd>min.dd)
      return d;
  }
    return -1;
}

int main() {
  person p[100000];
  person max = {"a",2015,10,7};
  person min = {"b",1813,8,5};
  int maxi=0,mini=0;
  int num = 0;
  int i = 0;
  int count = 0;
  int flag[100000] = {0};
  cin >> num;
  for (i = 0; i < num; i++) 
  {
    getchar();
    cin>>p[i].name;
    scanf("%d/%d/%d", &p[i].yy, &p[i].mm, &p[i].dd);
    flag[i] = legal(p[i].yy, p[i].mm, p[i].dd);
    if (flag[i] == 1) {
      count++;
      if(maxm(p[i],i,max)!=-1)
      {
        maxi = maxm(p[i],i,max);
        max=p[i];
      }
      if(minm(p[i],i,min)!=-1)
      {
        mini = minm(p[i],i,min);
        min=p[i];
      }
    }
  }
  if(count==0)
    cout<<count;
  else
    cout<< count<<' '<<p[maxi].name<<' '<<p[mini].name;
  return 0;
}