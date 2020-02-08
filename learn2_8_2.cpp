#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	int i, u[4], v[4], x, y = 10;
	for (i = 0; i <= 3; i++) {
		cin >> u[i];
	}
	v[0] = (u[0] + u[1] + u[2] + u[3]) / 7;
	v[1] = u[0] / ((u[1] - u[2]) / u[3]);
	v[2] = u[0] * u[1] / u[2] * u[3];
	v[3] = v[0] * v[1];
	x = (v[0] + v[1] + 2) - u[(v[3] + 3) % 4];
	if (x > 10)
		y += (v[2] * 100 - v[3]) / (u[u[0] % 3] * 5);
	else
		y += 20 + (v[2] * 100 - v[3]) / (u[v[0] % 3] * 5);
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}