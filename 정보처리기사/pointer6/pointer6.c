/* 2022.6.30(목) 23h50 정보처리기사 실기 공부
* 6-20 문자열 여러 개 정의 시 2차원 배열 사용
*/
#include <stdio.h>
void main() {
	char a[2][8] = { "Hello", "Soojebi" };
	printf("%s\n", a); // Hello
	printf("%s\n", a[0]); // Hello
	printf("%s\n", a[1]); // Soojebi
	
	a[0][4] = NULL;
	printf("%s\n", a[0]); // Hell
	printf("%s\n", a[0] + 2); // ll
	printf("%s\n", a[1] + 3); // jebi
}