/* 2022.7.14(목) 0h40
* 6-55 loop(반복문) 제어 명령어
* 1. break
* 2. continue
*/

#include <stdio.h>
void main() {
	// break 예제
	int i = 0;
	while (i < 10) {
		printf("break 예제 %d번째 loop -> ", i);
		i++;
		if (i == 7) {
			printf("while문(가장 가까운 반복문)을 이제 빠져나갑니다\n");
			break;
		}
		printf("%d\n", i);
	}

	// continue 예제
	i = 0;
	while (i < 10) {
		printf("continue 예제 %d번째 loop -> ", i);
		i++;
		if (i == 7) {
			printf("반복문 continue합니다~\n");
			continue; // 가장 가까운 반복문(증감식 부분)으로 돌아감
		}
		printf("%d\n", i);
	}
}