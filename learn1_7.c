#include <stdio.h>
#include <stdlib.h>
int main(){
	int year = 0;
	for (year = 2000; year <= 2500; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//能被4整除，但不能够被100整除，或者是能够被400整除的数
			printf("%d  is ruinnian\n", year);//满足条件的输出这是闰年
		else
			printf("%d not is ruinian\n", year);//不满足条件的输出这不是闰年
	}
	system("pause");
	return 0;
}
