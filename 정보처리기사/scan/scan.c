/* 2022.7.8(금) 23h55
* 6-44 scanf() 사용을 위해서는 stdio(standard in/output, 표준 입/출력).h header 선언 필요
* 
* 현재 내가 사용 중인 ide인 Visual Studio에서는 scanf()와 몇몇 함수를 권장하지 않는(unsafe) 함수로 지정하고, 해당 함수가 포함된 소스코드를 컴파일하지 않음 -> 빌드 시 오류 나며 실패(knou C p.72 참고)
*/

// 2022.7.9(토) 23h55 추가
#include <stdio.h>
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시
void main() {
	char c;
	int i;
	printf("%s", "문자 1개와 정수 1개를 입력해 주세요(space로 구분) > ");
	scanf("%c %d", &c, &i); // 사용자로부터 입력받는 내용을 변수 c/i의 주소에 저장 -> 나의 질문 = Java 실습 시 해봤던 것처럼 입력받은 값의 자료형 확인(원하는 자료형이 아니면 다시 입력받도록 하기 위해서)은 어떻게 할까?
	printf("%c %d", c, i);
}