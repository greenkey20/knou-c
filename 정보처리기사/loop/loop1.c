/* 2022.7.11(��) 23h55
* 6-50 �ݺ���
*/

#include <stdio.h>
void main() {
	// do while�� = ���ǹ��� ��/������ ��� ���� 1���� ������ ���� -> sum1�� i1�� ���� ������ -> i1�� ���� 1 �����ϰ�, while���� ������ �� ������ �����̹Ƿ� do while���� ���
	int i1 = 1;
	int sum1 = 0;

	do {
		sum1 += i1;
		i1++;
	} while (i1 < 0);

	printf("sum1 = %d\n", sum1); // 1

	// while�� = ������ ���� ���� �ش� �б⸦ �ݺ��ؼ� ���� -> while�� ������ �� ������ �����̹Ƿ� sum2�� i2�� ������ ��ȸ ����
	int i2 = 1;
	int sum2 = 0;

	while (i2 < 0) {
		sum2 += i2;
		i2++;
	}

	printf("sum2 = %d\n", sum2); // 0

	// ����: �� �ݺ����� �������� �����غ���(ó���� �ۼ� ��, ����� �� �Ӹ� �ӿ��� �������� �� �׷����� ������)
	// do while��
	int i3 = 1;
	int sum3 = 0;

	do {
		i3++;
		sum3 += i3;
	} while (i3 < 2);

	printf("sum1 = %d\n", sum3); // 2

	// while��
	int i4 = 1;
	int sum4 = 0;

	while (i4 < 2) {
		i4++;
		sum4 += i4;
	}

	printf("sum2 = %d\n", sum4); // 2
}