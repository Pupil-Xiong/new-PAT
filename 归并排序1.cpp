#include <iostream>
using namespcace std;

void merge(int A[],int L1)
{

}

void mergeSort(int A[],int left,int right)
{

	if(left<right)
		int mid=(left+right)/2;
	mergeSort(A,left,mid);
	mergeSort(A,mid+1,right);
	merge(A,left,mid,mid+1,right);
}

int main()
{



	return 0;
}