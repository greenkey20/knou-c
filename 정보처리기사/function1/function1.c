/* 2022.7.20(��) 23h50
* 6-61 ����� ���� �Լ�
* 6-63 ���� + 2022.7.21(��) 1h ���� ����
*/

#include <stdio.h>
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޽��� ����

char fn1(int num) {
	if (num % 2 == 0) { // �Ű������� ���޹��� ������ ¦���̸�
		return 'Y'; // ���� Y�� ��ȯ
	}
	else { // Ȧ���� ���
		return 'N';
	}
}

void main() {
	int input;

	while (1) { // C ���� 1�� true(�³�?)
		printf("������ �ϳ� �Է��� �ּ��� > ");
		scanf("%d", &input);
		// ���� �ƴ� �� �Է��ϸ� '¦�� ���� Y' ��� �� ���� ����..

		// printf("\n"); // �� ���� ��� scanf ������ �����
		
		char result = fn1(input);
		printf("�Էµ� ������ ¦�� ���� = %c\n\n", result);
	}

}