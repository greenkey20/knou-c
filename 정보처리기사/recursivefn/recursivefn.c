/* 2022.7.30(��) 23h50
* 6-66 ��� �Լ� = �Լ� �ڽ��� �ڽ��� �θ��� �Լ� 
*/

#include <stdio.h>

int recursiveFn(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * recursiveFn(n - 1);
	}
}