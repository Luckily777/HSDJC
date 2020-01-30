#include <stdio.h>
#include <stdlib.h>

#define ASize 5
int A[ASize] = { -7, -3, 2, 3, 11 };
int returnSize[ASize] = { 0 };
int main()
{
	for (int i = 0; i<ASize; i++)
	{
		returnSize[i] = (A[i] * A[i]);
	}
	int temp = 0;
	for (int i = 0; i<ASize; i++)
	{
		returnSize[i] = (A[i] * A[i]);
	}
	for (int j = 0; j<ASize; j++)
	{
		for (int k = j + 1; k<ASize; k++)
		{
			if (returnSize[k]>returnSize[j])
			{
				temp = returnSize[j];
				returnSize[j] = returnSize[k];
				returnSize[k] = temp;
			}
		}
	}
	for (int i = 0; i<ASize; i++)
	{
		printf("%d ", returnSize[i]);
	}
	system("pause");
	return 0;
}