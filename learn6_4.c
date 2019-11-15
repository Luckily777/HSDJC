#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int j;
	int n = 8; {
		for (i = 1; i <= n; i++){
			for (j = 1; j <= n - i; j++){
				putchar(' ');
			}
			for (j = 1; j <= 2 * i - 1; j++){
				putchar('*');
			}
			putchar('\n');
		}
	}
	{
		for (i = 7; i <= n; i--){
			for (j = 1; j <= n - i; j++){
				putchar(' ');
			}
			for (j = 1; j <= 2 * i - 1; j++){
				putchar('*');
				system("pause");
			}
			putchar('\n');
		}
	}
	system("pause");
	return 0;
}

