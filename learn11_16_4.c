#include <stdio.h>
#include <stdlib.h>

int main(){
	char grade;
	scanf("%c", &grade);
	printf("Your score:\n");
	switch (grade)//—°‘Ò”Ôæ‰
	{
	case'A':printf("85~100\n"); break;
	case'B':printf("70~84\n"); break;
	case'C':printf("60~67\n"); break;
	case'D':printf("<60\n"); break;
	default:break;
	}
	system("pause");
	return 0;
}