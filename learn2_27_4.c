#include <stdio.h>
#include <stdlib.h>
// 枚举

enum Week{//星期
	Mon,
    Tues,
	Wen,
	Thur,
	Fri,
	Sat,
	Sun
};

int main() {

	enum Week days;
	// int days=Mon;
	if (days == Mon)
	{
		printf("星期一\n");
	}
	else if (days == Tues)
	{
		printf("星期二");
	}
	system("pause");
	return 0;
}