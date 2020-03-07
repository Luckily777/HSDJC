#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//文件进行注释

int main() {
    FILE* fout = fopen("main.cpp", "r");
    FILE* fin = fopen("main.c", "w");
    int flag = 0;
    char out_ch = fgetc(fout);
    while (out_ch != EOF) {
        if (out_ch == '/') {
            char next_ch = fgetc(fout);
            if (next_ch == '/') {
                fputc('/', fin);
                fputc('*', fin);
                ///fputs("/*", fin);写一个字符串
                flag = 1;
              }
            else {
                fputc(out_ch, fin);
                fputc(next_ch, fin);
            }
        } 
        else {
            if (flag == 1 && out_ch == '\n') {
                fputc('*/', fin);
                fputc('\n', fin);
                flag = 0;
            }
            else {
                fputc(out_ch, fin);
            }
        }
        out_ch = fget(fout);
    }

    fclose(fout);
    fclose(fin);
    system("pause");
    return 0;
}