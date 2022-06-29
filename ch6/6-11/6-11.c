/* 2022.6.26(일) 17h5 C 프로그래밍
* p198 포인터 변수가 매개변수로 사용된 함수
*/
#include <stdio.h>
int change(int i); // change() 함수의 원형 선언

void main() {
	int a = 10;
	int *p = &a; // 포인터 변수 p 선언 + 변수 a의 주소를 저장
	printf("함수 호출 이전의 a = %d\n", a); // 변수 a에 담긴 값(정수) 출력

	change(p);
	printf("함수 호출 이후의 a = %d\n", a); // 변수 a에 담긴 값(정수) 출력
}

int change(int* k) { // change() 함수가 호출되면 p의 값/a의 주소가 이 함수의 매개변수로 전달됨

}