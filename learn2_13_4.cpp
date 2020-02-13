#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class MD
{
protected:
	float miles;
public:
	void setDist(float d){ miles = d; }
	virtual float getDist(){ return miles; }
	float square(){ return getDist()*getDist(); }
};

class FeetDist : public MD
{
protected:
	float feet;
public:
	void setDist(float);
	float getDist(){ return feet; }
	float getMiles(){ return miles; }
};

void FeetDist::setDist(float ft)
{
	feet = ft;
	MD::setDist(feet / 2);
}
int main(){
	FeetDist feet;

	feet.setDist(8);
	cout << feet.getDist() << "," << feet.getMiles() << "," << feet.square() << endl;
	system("pause");
	return 0;
}