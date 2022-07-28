/* 2022.7.27(��) 23h50 + 2022.7.28(��) 23h50 �߰�
* 6-65 �Ű����� ���� ���
* 1. call by value(���� ���� �ڷ� ����) = ������ ���� �Ѱ��ְ�, �� ���� ���ο� ������ �Ҵ�Ǿ� ��� -> ���� �Ű������� ��� ��ȭ�� �� �Ű������� ���� ��ġ�� ����
* 2. call by reference(������ ���� �ڷ� ����) = ������ ��� ���� �޸� ������ �ּ�/�� �Ű������� �ּҸ� ���� �Ű������� �Ѱ���/����
* 
* �Ű�����(parameter) = ����(formal) �Ű����� = �Լ��� �����ϴ� �ʿ��� ���޹޴� ������ (�ּ�)�� 
* ��������(argument) = ��(actual) �Ű����� = �Լ��� ȣ���ϴ� �ʿ��� �����ϴ� ������ (�ּ�)��
*/

#include <stdio.h>

// swap �Լ� 2������ ���� ����
void swapValues(int x, int y);
void swapReferences(int* x, int* y);

void main() {
	int a = 3, b = 5;
	printf("swapValues() �Լ� ȣ�� �� a = %d, b = %d\n", a, b);
	swapValues(a, b); // swapValues() �Լ� ȣ��
	printf("ȣ�� �� a = %d, b = %d\n", a, b);

	int c = 4, d = 6;
	printf("swapReferences() �Լ� ȣ�� �� c = %d, d = %d\n", c, d);
	swapReferences(&c, &d); // swapReferences() �Լ� ȣ��
	printf("ȣ�� �� c = %d, d = %d\n", c, d);
}

// swap �Լ� 2������ ����
void swapValues(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swapValues() �Լ� �� x = %d, y = %d\n", x, y);
}

void swapReferences(int* x, int* y) { // �ּҰ��� ���޹ޱ� ���� ������ ���� ����
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("swapReferences() �Լ� �� x = %d, y = %d\n", *x, *y);
}