#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
class Sample{
public:
	Sample(int x){
		p = new int(x);
	}
	~Sample(){
		if (p) delete p;
	}
	int show(){
		return *p;
	}
private:
	int*p;
};


int main(){
	Sample S(5);
	cout << S.show() << endl;
	system("pause");
	return 0;
}