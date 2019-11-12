#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct Student{
		int num;
		char name[20];
		float score;
	}Student1, Student2;
	scanf("%d%s%f", &Student1.num, Student1.name, &Student1.score);
	scanf("%d%s%f", &Student2.num, Student2.name, &Student2.score);
	printf("The higher score is:\n");
	if (Student1.score > Student2.score)
		printf("%d %s %6.2f\n", Student1.num, Student1.name, Student1.score);
	else if (Student1.score < Student2.score)
		printf("%d %s %6.2f\n", Student2.num, Student2.name, Student2.score);
	else
	{
		printf("%d %s %6.2f\n", Student1.num, Student1.name, Student1.score);
		printf("%d %s %6.2f\n", Student2.num, Student2.name, Student2.score);
	}
	system("pause");
	return 0;
}