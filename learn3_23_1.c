#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

typedef struct {
    int a;
    char b;
    short c;
    short d;
}AA_t;

//#pragma pack(4)
//
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    system("pause");
//    return 0;
//}
//#pragma pack()

struct _Record_Struct
{
    unsigned char Env_Alarm_ID : 4;
    unsigned char Para1 : 2;
    unsigned char state;
    unsigned char avail : 1;
}*Env_Alarm_Record;

int main()
{
    printf("%d\n", sizeof(struct _Record_Struct));
    system("pause");
    return 0;
}