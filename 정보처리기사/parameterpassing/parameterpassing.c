/* 2022.7.27(수) 23h50 + 2022.7.28(목) 23h50 추가
* 6-65 매개변수 전달 방법
* 1. call by value(값에 의한 자료 전달) = 변수의 값을 넘겨주고, 이 값은 새로운 공간에 할당되어 사용 -> 형식 매개변수의 어떠한 변화도 실 매개변수에 영향 미치지 않음
* 2. call by reference(참조에 의한 자료 전달) = 변수가 사용 중인 메모리 공간의 주소/실 매개변수의 주소를 형식 매개변수로 넘겨줌/보냄
* 
* 매개변수(parameter) = 형식(formal) 매개변수 = 함수를 정의하는 쪽에서 전달받는 변수의 (주소)값 
* 전달인자(argument) = 실(actual) 매개변수 = 함수를 호출하는 쪽에서 전달하는 변수의 (주소)값
*/

#include <stdio.h>

// swap 함수 2가지의 원형 선언
void swapValues(int x, int y);
void swapReferences(int* x, int* y);

void main() {
	int a = 3, b = 5;
	printf("swapValues() 함수 호출 전 a = %d, b = %d\n", a, b);
	swapValues(a, b); // swapValues() 함수 호출
	printf("호출 후 a = %d, b = %d\n", a, b);

	int c = 4, d = 6;
	printf("swapReferences() 함수 호출 전 c = %d, d = %d\n", c, d);
	swapReferences(&c, &d); // swapReferences() 함수 호출
	printf("호출 후 c = %d, d = %d\n", c, d);
}

// swap 함수 2가지의 정의
void swapValues(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swapValues() 함수 내 x = %d, y = %d\n", x, y);
}

void swapReferences(int* x, int* y) { // 주소값을 전달받기 위한 포인터 변수 선언
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("swapReferences() 함수 내 x = %d, y = %d\n", *x, *y);
}