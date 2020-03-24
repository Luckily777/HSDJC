#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

	// [最常用] 使用 fread 读取 N 个字节, 使用 fwrite 写入 N 个字节
	//char buf[1024] = { 0 };
	// 返回值的含义表示实际读取到的元素个数. 实际读到的元素个数如果比预期的少, 说明文件读取完毕
	//int n = fread(buf, 1, sizeof(buf) - 1, fp);
	//fwrite(buf, 1, strlen(buf), stdout);

int main() {
	// sscanf, sprintf 和文件操作无关, 但是非常常用
// s 前缀表示 字符串 sscanf 能够把一个字符串进行格式化解析. sprintf 能够格式化拼装一个字符串
	char* ptr = "100";
	int num = 0;
	sscanf(ptr, "%d", &num);

	char buf[1024] = { 0 };
	sprintf(buf, "num = %d\n", num);
	printf("%s\n", buf);
	system("pause");
	return 0;
}