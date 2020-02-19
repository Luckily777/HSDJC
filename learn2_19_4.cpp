#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class A {
public:
	int b;
	char c;
	virtual void print() {
		cout << "this is father¡¯s fuction! " << endl;
	}
};
class B : A {
public:
	virtual void print() {
		cout << "this is children¡¯s fuction! " << endl;
	}
};

//

int main(int argc, char * argv[]) {
    cout << sizeof(A) << "" << sizeof(B) << endl;
	system("pause");
	return 0;
}