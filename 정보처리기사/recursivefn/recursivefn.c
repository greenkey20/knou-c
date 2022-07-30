/* 2022.7.30(토) 23h50
* 6-66 재귀 함수 = 함수 자신이 자신을 부르는 함수 
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