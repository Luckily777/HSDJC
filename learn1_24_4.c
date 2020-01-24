#include <stdio.h>
#include <stdlib.h>

void foo();


#define a 10


int main()
{
	printf("%d..", a);
	foo();
	printf("%d", a);
	system("pause");
	return 0;
}
void foo(){
#undef a 
#define a 50
}