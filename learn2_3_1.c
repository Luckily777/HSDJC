#include <stdio.h>
#include <stdlib.h>
#define ASize 4
//°´ÆæÅ¼ÅÅĞòÊı×é
int main(){
	int A[] = { 5, 8, 9, 4 };
	int returnSize[4] = { 0 };
	int i, j = 0;
	for (i = 0; i<ASize; i++)
	{
		if (A[i] % 2 == 0)
		{
			returnSize[j++] = A[i];
			A[i] = -1;
		}
	}
	for (int k = 0; k<ASize; k++)
	{
		if ((A[k] != -1) && (A[k] % 2 == 1))
		{
			returnSize[j++] = A[k];
		}
	}
	for (i = 0; i < ASize; i++)
	{
		printf("%d ", returnSize[i]);
	}
	system("pause");
	return 0;

}