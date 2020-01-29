#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[] = { "alex" };
	char typed[] = { "aaleex" };
	int nameleg = 0;
	int typeleg = 0;
	int n = strlen(name);
	if (name[nameleg] != typed[typeleg])
	{
		printf("false");
		nameleg = n;
	}
	while (nameleg<n)
	{
		if (name[nameleg] == typed[typeleg])
		{
			if (nameleg == (n - 1))
			{
				printf("true");
				nameleg = n;
			}
			else
			{
				nameleg++;
				typeleg++;
			}
		}
		else
		{
			typeleg++;
		}
	}
	system("pause");
	return 0;
}