#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

struct s3 {
    char a;
    int b;
    int c;
};


//struct Test {
//    char a;
//    short b;
//    int c;
//    double d;
//    int e;
//    short f;
//    char g;
//};

struct Test {
    char a;
    struct s3 s;// �����Сȫ�����������λ�þͺã���ʼ��λ����s3�ж���������������
    int c;
    double d;

};
int main() {
    struct Test t;
    printf("sizeof=%d\n", sizeof(t));
    //printf("&t=%p\n", &t);
    //printf("&t.a=%p\n", &t.a);
    //printf("&t.b=%p\n", &t.b);
    //printf("&t.c=%p\n", &t.c);

    system("pause");
    return 0;
}