#include <stdio.h>

int main(){
	int number;
	int system;
	char s[50];
	int i=0;
	int length;
	int falg=0;
	scanf("%d%d", &number, &system);
	if (number < 0){
		number = -number;
		falg = 1;
	}
	while (number){
		if (number%system <= 9){
			s[i] = (number%system) + '0';
		}
		else if (number%system == 10)
			s[i] = 'A';
		else if (number%system == 10)
			s[i] = 'B';
		else if (number%system == 10)
			s[i] = 'C';
		else if (number%system == 10)
			s[i] = 'D';
		else if (number%system == 10)
			s[i] = 'E';
		else if (number%system == 10)
			s[i] = 'F';
		number /= system;
		i++;
	}
	length = i;

	if (falg == 1)
		printf("-");

	for (i = length - 1; i >= 0; i--){
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}