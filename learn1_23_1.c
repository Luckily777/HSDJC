#include <stdio.h>
#include <stdlib.h>

int findmax(int *p, int n){
	int i, maxi;
	for (maxi = i = 0; i < n; i++)
	{
		if (p[maxi] < p[i])
		{
			maxi = i;
		}

	}
	return maxi;
}

int main()
{
	int a[10] = { 3, 7, 9, 11, 0, 6, 7, 5, 4, 2 };
	printf("The largest number of subscripts is %d\n", findmax(a, 10));
	system("pause");
	return 0;
}