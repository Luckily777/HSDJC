#include <stdio.h>
#include <stdlib.h>
//µİ¹éº¯Êı
int f(int n){
	if (n)	return f(n - 1) + n;
	else return n;
}
int main(){
	printf("%d ",f(4));
	system("pause");
	return 0;

}