#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[] = "     -42 ";
	int len = strlen(str);
	int size = len;
	int i;
	for (i = 0; i<size; i++)
	{
		if (str[i] == '-')
		{
			printf("%c", str[i]);
			i = size;
		}
	}
	for (i = 0; i<len; i++){
		if (('0'<str[i]) && (str[i]<'9'))
		{
			printf("%c", str[i]);
		}
	}
	system("pause");
	return 0;

}
