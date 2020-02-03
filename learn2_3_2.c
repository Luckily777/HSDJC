#include <stdio.h>
#include <stdlib.h>
//¼ÓÒ»
int main(){
	
	int  digitsSize = 2;
	int digits[] = { 9 ,9};
	int Size = digitsSize-1;
	int returnSize[10] = { 0 };
	while (Size >= 0)
	{
		if (digits[Size] == 9)
		{
			if ((Size) == 0)
			{
				digitsSize += 1;
				returnSize[digitsSize-1] = 0;
				digits[Size] = 0;
				Size += 1;
			}
			digits[Size] = 0;
			returnSize[Size] = 0;
			Size--;
		}
		else
		{
			digits[Size] += 1;
			returnSize[Size] += 1;
			Size = -1;
		}
	}
	for (int i = 0; i<digitsSize; i++)
	{
		printf("%d ", returnSize[i]);
	}
	system("pause");
	return 0;

}