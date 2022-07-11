/* 2022.7.11(월) 23h55
* 6-50 반복문
*/

#include <stdio.h>
void main() {
	// do while문 = 조건문의 참/거짓에 상관 없이 1번은 무조건 실행 -> sum1에 i1의 값이 더해짐 -> i1의 값이 1 증가하고, while문을 만났을 때 조건이 거짓이므로 do while문을 벗어남
	int i1 = 1;
	int sum1 = 0;

	do {
		sum1 += i1;
		i1++;
	} while (i1 < 0);

	printf("sum1 = %d\n", sum1); // 1

	// while문 = 조건이 참인 동안 해당 분기를 반복해서 실행 -> while문 만났을 때 조건이 거짓이므로 sum2에 i2가 더해질 기회 없음
	int i2 = 1;
	int sum2 = 0;

	while (i2 < 0) {
		sum2 += i2;
		i2++;
	}

	printf("sum2 = %d\n", sum2); // 0

	// 참고: 이 반복문들 차근차근 생각해보기(처음에 작성 시, 결과를 내 머리 속에서 차근차근 잘 그려보지 못했음)
	// do while문
	int i3 = 1;
	int sum3 = 0;

	do {
		i3++;
		sum3 += i3;
	} while (i3 < 2);

	printf("sum1 = %d\n", sum3); // 2

	// while문
	int i4 = 1;
	int sum4 = 0;

	while (i4 < 2) {
		i4++;
		sum4 += i4;
	}

	printf("sum2 = %d\n", sum4); // 2
}