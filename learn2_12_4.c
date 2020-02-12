#include <stdio.h>
#include <stdlib.h>
//兔子生兔子问题
int main(){
	int nums = 0;
	int s1 = 1;
	int s2 = 1;
	int month;
	for (month=3; month < 10;month++){
		nums = s1 + s2;
		s1 = s2;
		s2 = nums;
	}
	printf("第九个月一共有%d对兔子\n", nums);
	system("pause");
	return 0;

}