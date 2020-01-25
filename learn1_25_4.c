#include <stdio.h>
#include <stdlib.h>

enum weekday { sun, mon = 3, tue, wed, thu };
enum weekday workday;

void main()
{
	workday = wed;
	printf("%d\n", workday);
	system("pause");
}
