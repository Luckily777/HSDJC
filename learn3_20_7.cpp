#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Printer {
public:
    Printer(std::string name) { std::cout << name; }
};
class Container {
public:
    Container() : b("b"), a("a") {}
    Printer a;
    Printer b;
};

char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
char** cp[] = { c + 3, c + 2, c + 1, c };
char*** cpp = cp;

int main() {

    //1.
    /*Container c;*/

    //2.
    /*printf("%s", **++cpp);
    printf("%s", *-- * ++cpp + 3);
    printf("%s", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);*/


    //3.
    char a = 101;
    int sum = 200;
    a += 27; sum += a;
    printf("%d\n", sum);
    system("pause");
    return 0;
}