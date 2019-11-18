#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	char Psssword[1024] = {0};
	printf("请输入您的密码：\n");
	for (i = 1; i <= 3; i++){
		scanf("%s", &Psssword);
		if (strcmp(Psssword, "77777777") == 0){
			printf("登陆成功\n");
			break;
		}
		else{
			printf("您的密码输入错误，请重新输入！\n");
		}
		if (i == 3){
			printf("抱歉，您的机会已用尽！");
		}
	}
	system("pause");
	return 0;
}