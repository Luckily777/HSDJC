#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	srand((unsigned int)time(NULL));

	int s = rand()% 100 + 1;

	int n=0;
	printf("������һ��ֵ��\n");
	while (n != s){
		scanf("%d", &n);
		if (n > s)
		{
			printf("����\n");
		}
		else if (n < s)
		{
			printf("����\n");
		}
	}
	printf("�¶���\n");
	system("pause");
	return 0;
}