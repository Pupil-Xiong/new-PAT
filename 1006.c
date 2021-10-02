#include<stdio.h>
int main()
{
	int a, b = 0, i = 0;
	scanf("%d", &a);
	if (a <= 0)
		printf("error");
	else
	{
		while (a != 1)
		{
			if (a % 2 == 0)
				a = a / 2;
			else
				a = (3 * a + 1) / 2;
			i++;
		}
		printf("%d", i);
	}
}
