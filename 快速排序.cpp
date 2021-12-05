#include <iostream>
using namespace std;

int Partition(int A[],int left,int right)
{
	int temp=A[0];	//将A[0]存入
	cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<endl;
	cout<<"temp = "<<temp<<endl;
	while(left<right)
	{
		while(A[right]>temp)  
			right--;  //没问题指针就左移
		A[left]=A[right];	//左边的空缺由右补

		while(left<right&&A[left]<=temp)	//不能省略left<right，right--可能会减小
				left++;
		A[right]=A[left];   //右边的空缺由左补
	}
	A[left]=temp;
	cout<<"执行函数"<<endl;
	cout<<"left = "<<left<<endl;
	return left;
}

void quickSort(int A[],int left,int right)
{

	if(left<right)
	{
		int pos=Partition(A,left,right);
		quickSort(A,left,pos-1);
		quickSort(A,pos+1,right);
	}
}


int main()
{
	int A[11]={35,18,16,72,24,65,12,88,46,28,55};
	int left=0;
	int right=10;
//	left= Partition(A,left,right);
	quickSort(A,left,right);
	for(int i=0;i<11;i++)
	{

		cout<<A[i]<<" ";
	}
	cout<<endl;
	return 0;
}