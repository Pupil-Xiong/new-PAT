#pragma warning(disable:4996)
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
	int k = 0;
	int i = 0, j = 0;
	int tempexp;
	float tempcoe;
	vector<float> data(1005,0) ;   //´æ´¢ĞòºÅÊı¾İµÄÈİÆ÷
	set<int, greater<int>> s;   //set½µĞòÅÅÁĞ
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d %f", &tempexp, &tempcoe);
			data[tempexp] += tempcoe;
			if (data[tempexp] != 0)
			{
				s.insert(tempexp);
			}
			else
			{
				s.erase(tempexp);
			}
		}
	}
	printf("%d", s.size());
	for (auto it=s.begin();it!=s.end();it++)
	{
		printf(" %d %.1f", *it, data[*it]);
	}
	return 0;
}