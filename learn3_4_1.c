#include <stdio.h>
#include <stdlib.h>
//�ļ�
int main() {
    FILE* fout = fopen("learn3_4_1.c", "r");
    
    // ��
    char ch = fgetc(fout);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fout);
    }

    //���д
    FILE* fin = fopen("learn3_4_1.c", "w");
    fputc('h', fin);
    fputc('e', fin);
    fputc('l', fin);
    fputc('l', fin);
    fputc('o', fin);

    //׷��д
    FILE* fain = fopen("learn3_4_1.c", "a");
    fputs("#include <stdio.h>", fain);
    fputs("int main{", fain);
    fputs("return 0;", fain);
    fputs("}", fain);

    //��λ
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