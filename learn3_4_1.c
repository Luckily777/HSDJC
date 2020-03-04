#include <stdio.h>
#include <stdlib.h>
//文件
int main() {
    FILE* fout = fopen("learn3_4_1.c", "r");
    
    // 读
    char ch = fgetc(fout);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fout);
    }

    //清空写
    FILE* fin = fopen("learn3_4_1.c", "w");
    fputc('h', fin);
    fputc('e', fin);
    fputc('l', fin);
    fputc('l', fin);
    fputc('o', fin);

    //追加写
    FILE* fain = fopen("learn3_4_1.c", "a");
    fputs("#include <stdio.h>", fain);
    fputs("int main{", fain);
    fputs("return 0;", fain);
    fputs("}", fain);

    //定位
    FILE* fdin = fopen("file.txt", "r+");
    char ch = fgetc(fdin);
    while (ch != EOF)
    {
        if (ch == '/')
        {
            char next = fgetc(fdin);
            if (next == '/')
            {
                fputc('*',fdin);
            }
        }
        ch = fgetc(fdin);
    }
    fclose(fdin);
    system("pause");
    return 0;
}