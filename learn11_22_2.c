#include <stdio.h>
#include <stdlib.h>

int main(){
	char letter;
	printf("please input the first letter of someday\n");
	while ((letter = getchar()) != 'Y'){
		switch (letter)
		{
		case 'S':printf("please input the second letter:\n");
			if ((letter = getchar()) == 'a')
				printf("Saturday\n");
			else if ((letter = getchar()) == 'u')
				printf("Sunday\n");
			else
				printf("data error.");
			break;
		case 'F':printf("Friday");
			break;
		case 'M':printf("Monday");			
			break;
		case 'T':printf("please input the second letter:\n"); 
			if ((letter = getchar()) == 'u')
				printf("Tuesday\n");
			else if ((letter = getchar()) == 'h')
				printf("Thursday\n");
			else
				printf("data error.");
			break;
		case 'W':printf("Wednesday");			
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;

}