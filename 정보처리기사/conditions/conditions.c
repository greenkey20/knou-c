#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	printf("������ ������ �Է��� �ּ��� > ");
	int score;
	scanf("%d", &score);

	if (score % 2 == 0) {
		printf("¦��\n");
	}
	else {
		printf("Ȧ��\n");
	}

	switch (score / 10) {
		case 10:
		case 9:
			printf("ȯ�� ���� %d = A", score / 10);
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