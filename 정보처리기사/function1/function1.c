/* 2022.7.20(수) 23h50
* 6-61 사용자 정의 함수
* 6-63 예시 + 2022.7.21(목) 1h 나의 응용
*/

#include <stdio.h>
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

char fn1(int num) {
	if (num % 2 == 0) { // 매개변수로 전달받은 정수가 짝수이면
		return 'Y'; // 문자 Y를 반환
	}
	else { // 홀수인 경우
		return 'N';
	}
}

void main() {
	int input;

	while (1) { // C 언어에서 1은 true(맞나?)
		printf("정수를 하나 입력해 주세요 > ");
		scanf("%d", &input);
		// 정수 아닌 것 입력하면 '짝수 여부 Y' 출력 등 무한 실행..

		// printf("\n"); // 이 개행 없어도 scanf 다음에 개행됨
		
		char result = fn1(input);
		printf("입력된 정수의 짝수 여부 = %c\n\n", result);
	}

}