#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int j;
	int k;
	int m;
	int n = 8; {
		{
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
			for (k = 7; k >=0; k--){
				for (m = 1; m <= n - k; m++){
					putchar(' ');
				}
				for (m = 1; m <= 2 * k - 1; m++){
					putchar('*');
				}
				putchar('\n');
			}
			while (k < 0);

	}
	}
	system("pause");
	return 0;
}
