#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//º¯ÊýÖ¸Õë

typedef void(*P_FUNC)(int);

void f1(int a){
	printf("wolaile:%d\n",a);
}

void (*signal(int ,void(*)(int)))(int);
P_FUNC signal(int, P_FUNC);

int main(){
	void(*pf1)(int);
	P_FUNC pf2=f1;
	pf1(1);
	pf2(2);
	(*pf1)(3);
	(*pf2)(4);
	system("pause");
	return 0;
}