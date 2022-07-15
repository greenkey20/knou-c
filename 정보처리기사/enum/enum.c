/* 2022.7.15(금) 23h50
* 6-56 자료형 중 하나인 열거체/열거형(enumeration)
* 변수가 가질 수 있는 값을 나열해 놓은 것
* 변수가 가질 수 있는 값의 범위가 정해져 있는 경우 사용
*/

#include <stdio.h>

enum Week {
	Sunday,
	Monday,
	Tuesday = 5,
	Wednesday
};

void main() {
	enum Week week;
	week = Wednesday;
	printf("%d", week); // 6
}