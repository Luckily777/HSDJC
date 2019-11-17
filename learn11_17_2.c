#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	srand((unsigned int)time(NULL));

	int s = rand()% 100 + 1;

	int n=0;
	printf("请输入一个值：\n");
	while (n != s){
		scanf("%d", &n);
		if (n > s)
		{
			printf("高了\n");
		}
		else if (n < s)
		{
			printf("低了\n");
		}
	}
	printf("猜对了\n");
	system("pause");
	return 0;
}