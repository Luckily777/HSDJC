#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Êê½ðÐÅ
int main()
{
	char ransomNote[100] = "aa";
	char magazine[100] = "aab";
	int i=0,j=0;
	int n1 = strlen(ransomNote);
	int n2 = strlen(magazine);
	if (n1>n2)
	{
		printf("false");
	}
		for (i = 0, j = 0; (i<n1)&&(j < n2); j++)
		{
			if (ransomNote[i] == magazine[j])
			{
				magazine[j] = 0;
				if (i ==(n1 - 1))
				{
					printf("true");
				}
				i++;
			}
			else
			{
				if(j == n2 - 1)
			{
				i++;
				printf("flase");
				break;
			}
			}

		}
	system("pause");
	return 0;
}