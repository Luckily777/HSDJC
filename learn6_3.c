#include <stdio.h>
#include <stdlib.h>
void PrintNum(int num){//½«1234ÊäÈë½ø£»
	if (num > 9){
		PrintNum(num / 10);
	}
	printf("%d ", num % 10);
}
int main()
{
	PrintNum(1234);
	system("pause");
	return 0;
}