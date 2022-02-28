#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int m=0,n=1,i=0,j=0,sum=0,count=0,temp=0;
	int a[20];
	cin>>m;
	for(i=0;i<m;i++){
		n=1;
		count=0;
		cin>>a[i];
		temp=a[i];
		while(temp!=0){
			count++;
			temp/=10;
		}
		for(j=0;j<10;j++){
			sum=n*pow(a[i],2);
			if(sum%((int)(pow(10,count)))==a[i]){
				cout<<n<<' '<<sum;
				if(i!=m-1)
					cout<<endl;
				n++;
				break;
			}
			else if(j==9){
				cout<<"No";
				if(i!=m-1)
					cout<<endl;
			}
			n++;
		}
	}
	return 0;
}