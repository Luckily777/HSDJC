#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

	// [���] ʹ�� fread ��ȡ N ���ֽ�, ʹ�� fwrite д�� N ���ֽ�
	//char buf[1024] = { 0 };
	// ����ֵ�ĺ����ʾʵ�ʶ�ȡ����Ԫ�ظ���. ʵ�ʶ�����Ԫ�ظ��������Ԥ�ڵ���, ˵���ļ���ȡ���
	//int n = fread(buf, 1, sizeof(buf) - 1, fp);
	//fwrite(buf, 1, strlen(buf), stdout);

int main() {
	// sscanf, sprintf ���ļ������޹�, ���Ƿǳ�����
// s ǰ׺��ʾ �ַ��� sscanf �ܹ���һ���ַ������и�ʽ������. sprintf �ܹ���ʽ��ƴװһ���ַ���
	char* ptr = "100";
	int num = 0;
	sscanf(ptr, "%d", &num);

	char buf[1024] = { 0 };
	sprintf(buf, "num = %d\n", num);
	printf("%s\n", buf);
	system("pause");
	return 0;
}