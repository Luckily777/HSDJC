#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	char Psssword[1024] = {0};
	printf("�������������룺\n");
	for (i = 1; i <= 3; i++){
		scanf("%s", &Psssword);
		if (strcmp(Psssword, "77777777") == 0){
			printf("��½�ɹ�\n");
			break;
		}
		else{
			printf("������������������������룡\n");
		}
		if (i == 3){
			printf("��Ǹ�����Ļ������þ���");
		}
	}
	system("pause");
	return 0;
}