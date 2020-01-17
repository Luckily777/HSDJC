#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[2][4];
	strcpy(arr[0], "you"); 
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s \n", arr);
	system("pause");
	return 0;
}