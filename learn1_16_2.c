#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x = 121;
	int temp = x;
	int count = 0;
	for (x; x / 10 != 0; x /= 10)
	{
		count += 1;
	}
	int sum = 0;
	x = temp;
	while (x>0)
	{
		sum += (x % 10)*pow(10, count);
		count--;
		x /= 10;
	}
	if (sum == temp)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	system("pause");
	return 0;
}