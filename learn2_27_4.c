#include <stdio.h>
#include <stdlib.h>
// ö��

enum Week{//����
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
		printf("����һ\n");
	}
	else if (days == Tues)
	{
		printf("���ڶ�");
	}
	system("pause");
	return 0;
}