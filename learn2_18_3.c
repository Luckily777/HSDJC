#include <stdio.h>
#include <stdlib.h>
//Õ®≈‰∑˚∆•≈‰

int main(){
	char s[] = "acdcb";
	char p[] = "a*c?b";
	int i, j;
	int sSize = strlen(s);
	int pSize = strlen(p);
	if (p[0] == '*'&&pSize==1)
	{
		printf("true");
	}
	else
	{
		for (i = 0, j = 0; i<sSize&&j<pSize; i++, j++)
		{
			if (p[j] != '?')
			{
				if (s[i] != p[j]&&p[j]!='*')
				{
					printf("false");
					i = sSize + 1;
					j = pSize + 1;
				}
				else if (p[j] == '*')
				{
					int m = i;
					int n = j+1;
					while (s[m] !=p[n])
					{
						m++;
					}
					i = m;
					j = n;
				}

			}
		}
		if (j == pSize)
		{
			printf("true");
		}
	}
	system("pause");
	return 0;
}