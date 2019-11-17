#include <stdio.h>
#include <stdlib.h>
int Sum(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i < n; i++){
		if (n%i == 0)
			sum += i;
	}
	return sum;
}
int main()

{
	int j;
	for (j = 2; j < 1000; j++)
	{
		if (Sum(j) == j)
			printf("%d is a wanshu!\n", j);
	}
	system("pause");
	return 0;

}
