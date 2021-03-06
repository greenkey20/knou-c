/* 2022.6.30(목) 23h35 정보처리기사 실기 공부
* 6-19 1차원 배열과 문자열
* 
* printf() 함수에서 %s 형식으로 문자열 읽고 출력 시, 매개변수로 문자를 읽기 시작할 위치/시작 주소를 알려주면 시작 주소 ~ NULL 문자 직전 값까지 읽어서 출력함
*/
#include <stdio.h>
void main() {
	char a[7] = "Hello"; // 1차원 문자 배열(=문자열) a 선언 및 초기화 <- 문자열 초기화 시 마지막에 NULL 문자 삽입되므로, 초기화하는 글자 수보다 1 이상 큰 size로 배열 선언하기; 초기화 시 배열의 크기 명시하지 않으면 '문자열의 글자 수 + 1'만큼 자동으로 생성됨
	printf("%s\n", a); // 배열의 시작점 a에 해당하는 값 a[0] ~ NULL 문자 전인 a[4] 출력 -> Hello
	printf("%s\n", a + 1); //'배열의 시작점 + 1'에 해당하는 값 a[1] ~ NULL 문자 전인 a[4] 출력 -> ello

	a[4] = NULL;
	printf("%s\n", a + 1); // a[4]에 저장된 값이 NULL로 바뀌었으므로, a[1] ~ NULL 문자 전인 a[3] 출력 -> ell
}