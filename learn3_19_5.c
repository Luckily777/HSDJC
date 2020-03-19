#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


struct st_t {
    int status;
    short* pdata;
    char errstr[32];
};

int main() {
    struct st_t st[16];
    char* p = (char*)(st[2].errstr + 32);
    printf("%d", (p - (char*)(st)));
    system("pause");
    return 0;
}