#include <stdio.h>
#include <stdlib.h>

//ջ���Խ����޸ģ����������ܽ����޸�

int main() {
	// �ı����ջ�е��������ݣ�����ȫok��
	char str1[] = "hello";
	str1[0] = 'a'; 
	printf("%s", str1);

	//�˴���ֱ�ӱ�����ǿ�Ƹı䳣�����е����ݻᵼ�³������
	char* str2 = "hello";
	str2[0] = 'a';
	printf("%s", str2);

	system("pause");
	return 0;
}