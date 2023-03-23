#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	printf("정수로 점수를 입력해 주세요 > ");
	int score;
	scanf("%d", &score);

	if (score % 2 == 0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	}

	switch (score / 10) {
		case 10:
		case 9:
			printf("환산 점수 %d = A", score / 10);
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		default:
			printf("F");
	}
}