#include <stdio.h>
#include <stdlib.h>
//Ñ¹Ëõ×Ö·û´®

int compress(char* chars, int charsSize){
	char temp = '0';
	int j = 0;
	int m = 1;
	int l = 0;
	for (int i = 0; i<charsSize; i++)
	{
		if (temp != chars[i])
		{
			temp = chars[i];
			if (i != 0)
			{
				chars[j++] = '0' + l;
			}
			chars[j++] = temp;
			l = 0;
			l++;
		}
		else
		{
			if (l == 9)
			{
				chars[j++] = '0' + m;
				m++;
				l = 0;
			}
			else
			{
				l++;
			}
		}
	}
	chars[j++] = '0' + l;
	chars[j] = '\0';
	printf("%d\n", j);
	return 0;
}

int main(){
	char chars[] = "accccccccccccc";
	int charsSize = strlen(chars);
	compress(chars, charsSize);
	system("pause");
	return 0;
}