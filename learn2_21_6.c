#include <stdio.h>
#include <stdlib.h>
//

int main(){
	char *c[] = { "ENTER","NEW", "POINT", "FIRST" };
	char **cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp+3);//new
	printf("%s\n", *cpp[-2]+3);//point
	printf("%s\n", cpp[-1][-1]+1);//nt
	system("pause");
	return 0;
}