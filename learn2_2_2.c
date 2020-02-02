#include <stdio.h>
#include <stdlib.h>

int main(){
	char S[] = "a-bC-dEf-ghIj";
	int left = 0;
	int right = (strlen(S) - 1);
	int mid = (left + right) / 2;
	char temp = '0';
	while ((left<mid) && (right>mid))
	{
		if ((('A' <= S[left]) && (S[left] <= 'Z')) || (('a' <= S[left]) && (S[left] <= 'z')))
		{
			if ((('A' <= S[right]) && (S[right] <= 'Z')) || (('a' <= S[right]) && (S[right] <= 'z')))
			{
				temp = S[left];
				S[left] = S[right];
				S[right] = temp;
				left++;
				right--;
			}
			else
			{
				right--;
			}
		}
		else
		{
			left++;
		}
	}
	printf("%s\n", S);
	system("pause");
	return 0;
}