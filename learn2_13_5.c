#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[] = "123abc";
	int i, num = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'z') 
		{
			num++;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}