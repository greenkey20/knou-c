/* 2022.7.22(금) 23h50
* 6-64 함수 포인터
* 함수의 주소를 저장 + 해당 주소의 함수를 호출하는 데 사용하는 포인터
*/

#include <stdio.h>
void fn1() {
	// 2022.7.24(일) 0h5
	printf("fn1 함수에요\n");
}

int fn2(int num) { // call by value
	printf("매개변수 %d 받은 fn2 함수에요\n", num);
	return 0;
}

void main() {
	// 위에서 선언 및 정의한 fn1() 및 fn2()를 각각 호출 
	fn1();
	fn2(7);

	// 2022.7.23(토) 23h50
	void (*pf1)(); // 매개변수를 받지 않고 return 값은 없는 함수 포인터 pf1 생성
	int (*pf2)(int); // int형 자료를 매개변수로 받고 int형 자료를 return하는 함수 포인터 pf2 생성

	// 함수명을 함수 포인터에 대입
	pf1 = fn1;
	pf2 = fn2;

	// 함수 포인터를 이용해서 함수를 호출
	pf1();
	pf2(4);
}