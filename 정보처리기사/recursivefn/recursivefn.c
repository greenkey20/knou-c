/* 2022.7.30(토) 23h50
* 6-66 재귀 함수 = 함수 자신이/함수 내부에서 함수 자신을 다시 호출하는/부르는 함수
* 
* Java 정석 p.270에 따르면,
- 호출된 함수는 '값에 의한 호출(call by value)'을 통해 원래의 값(x) 복사된 값(o)으로 작업하기 때문에 호출한 함수와 관계없이 독립적인 작업 수행이 가능함
- 재귀호출 뿐이면 무한히 자기 자신을 호출하는 바 무한 반복에 빠짐 -> 무한반복문이 조건문과 함께 사용되어야 하는 것처럼, 재귀호출도 조건문이 필수적으로 따라다님 
*/

#include <stdio.h>

// 재귀함수 원형 선언
int recursiveFnByValue(int n);
int recursiveFnByReference(int* n);

void main() {
	int n = 4;
	printf("값에 의한 호출로 재귀: %d\n", recursiveFnByValue(n));
	printf("참조에 의한 호출로 재귀: %d", recursiveFnByReference(&n));
}

// 재귀함수 정의
int recursiveFnByValue(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * recursiveFnByValue(n - 1);
	}
}

// 2022.7.31(일) 23h50 call by reference로 재귀함수를 호출하면 어떤 일이 생길까? -> 2022.8.1(월) 2h35 일단 아래와 같이 작성한 함수는 call by value로 재귀함수 호출하는 경우와 결과 차이는 없는 것 같은데..
int recursiveFnByReference(int* n) {
	if (*n <= 1) {
		return 1;
	}
	else {
		int m = *n - 1;
		// int* mpointer = &m;
		return (*n) * recursiveFnByReference(&m);
	}
}