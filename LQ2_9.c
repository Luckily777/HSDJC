#include <stdio.h>
#include <stdlib.h>
//验证回文串
int main(){
	char s[] = "race a car";
	int LONG = strlen(s);
	int n = 0;
	for (int i = 0; i<LONG; i++)
	{
		if ((('a' <= s[i]) && (s[i] <= 'z')) || (('A' <= s[i]) && (s[i] <= 'Z')))
		{
			s[n++] = s[i];
		}
		if (i == 29)
		{
			s[n] = '\0';
		}
	}
	int left = 0;
	int right = strlen(s) - 1;
	int mid = (right + left) / 2;
	while (left != right){
		if ((s[left] == s[right]) || (s[left] == s[right] + 32) || (s[left] == s[right] - 32))
		{
			left++;
			right--;
		}
		else
		{
			printf("false");
			break;
		}
	}
	if (left == right)
	{
		printf("true");
	}
	system("pause");
	return 0;
}