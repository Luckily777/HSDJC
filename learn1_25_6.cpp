#include <stdio.h>
#include <stdlib.h>

class A{
public:
	void test(){ printf("test A"); }
};

int main()
{
	A*pA = NULL;
	pA->test();
	system("pause");
	return 0;
}
