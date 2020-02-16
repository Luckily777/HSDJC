#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

class R{
public:
	R(int r1, int r2){
		R1 = r1;
		R2 = r2;
	}
	void print();
	void print() const;
private:
	int R1, R2;
};
void R::print(){
	cout << R1 << "," << R2 << endl;
}  void R::print() const{
	cout << R1 << "," << R2 << endl;
}


int main(){
	R a(6, 8);
	const R b(56, 88);
	b.print();
	system("pause");
	return 0;
}