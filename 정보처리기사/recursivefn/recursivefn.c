/* 2022.7.30(토) 23h50
* 6-66 재귀 함수 = 함수 자신이/함수 내부에서 함수 자신을 다시 호출하는/부르는 함수
* 
* Java 정석 p.270에 따르면, 호출된 함수는 '값에 의한 호출(call by value)'을 통해 원래의 값(x) 복사된 값(o)으로 작업하기 때문에 호출한 함수와 관계없이 독립적인 작업 수행이 가능함
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