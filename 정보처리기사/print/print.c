/* 2022.7.6(수) 23h50
6-40 표준 출력 함수
*/

#include <stdio.h>
void main() {
	printf("Hello\nC\nWorld");

	// 2022.7.7(목) 23h40
	printf("from Eunice\n"); // 위 문자열로부터 개행 없이 이어서 출력됨

	char a = 'A';
	int b = 21;
	printf("%c %d\n", a, a); // A 65
	printf("%c %d\n", b, b); // 이상한문자 21
	printf("%5d\n", b); // 총 5자리의 10진수로 변수 b를 출력 ->    21(왼쪽에 빈칸 3개)
	printf("%05d\n", b); // 총 5자리의 10진수 + 앞의 빈 공간은 0으로 채움 -> 00021
	printf("%-5d\n", b); // - = 왼쪽 정렬 -> 21
	printf("%-05d\n", b); // - = 왼쪽 정렬 -> 21(앞의 빈 공간에 채워진 0 없어지는 듯?)

	double c = 65.19876;
	printf("%c\n", c); // 0 출력 -> 나의 질문 = why/how?
	printf("%.2f\n", c); // 65.20
	printf("%5.2f\n", c); // 65.20
	printf("%5.3f\n", c); // 65.199
	printf("%10.3f\n", c); //     65.199
	printf("%10f\n", c); // 65.198760
}