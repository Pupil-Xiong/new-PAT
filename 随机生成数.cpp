#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++)
	{
		cout<<rand()<<" ";
	}
	return 0;
}