#include <stdio.h>
#include <stdlib.h>

int main(){

	//一一列举所有可能的值

	for (int i = 1;; i++){

		int fish = i;



		int flag = 1;

		//模拟分鱼过程

		for (int j = 1; flag && j <= 5; j++){

			if ((fish - 1) % 5 == 0){

				fish = (fish - 1) * 4 / 5;

			}
			else{

				flag = 0;

			}

		}

		if (flag){

			printf("%d\n", i);

			break;

		}

	}
	system("pause");
	return 0;

}
