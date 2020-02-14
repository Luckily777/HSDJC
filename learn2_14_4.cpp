#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Base{
public:
	void fun1(){
		cout << "Base\n";
	}
	virtual void fun2(){
		cout << "Base\n";
	}
};
class Derived :public Base{
public:
	void fun1(){
		cout << "Derived\n";
	}
	virtual void fun2(){
		cout << "Derived\n";
	}
};
void f(Base&b){
	b.fun1();
	b.fun2();
}

int main(){
	Derived obj;
	f(obj);
	system("pause");
	return 0;
} 