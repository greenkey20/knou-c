/* 2022.7.30(��) 23h50
* 6-66 ��� �Լ� = �Լ� �ڽ���/�Լ� ���ο��� �Լ� �ڽ��� �ٽ� ȣ���ϴ�/�θ��� �Լ�
* 
* Java ���� p.270�� ������,
- ȣ��� �Լ��� '���� ���� ȣ��(call by value)'�� ���� ������ ��(x) ����� ��(o)���� �۾��ϱ� ������ ȣ���� �Լ��� ������� �������� �۾� ������ ������
- ���ȣ�� ���̸� ������ �ڱ� �ڽ��� ȣ���ϴ� �� ���� �ݺ��� ���� -> ���ѹݺ����� ���ǹ��� �Բ� ���Ǿ�� �ϴ� ��ó��, ���ȣ�⵵ ���ǹ��� �ʼ������� ����ٴ� 
*/

#include <stdio.h>

// ����Լ� ���� ����
int recursiveFnByValue(int n);
int recursiveFnByReference(int* n);

void main() {
	int n = 4;
	printf("���� ���� ȣ��� ���: %d\n", recursiveFnByValue(n));
	printf("������ ���� ȣ��� ���: %d", recursiveFnByReference(&n));
}

// ����Լ� ����
int recursiveFnByValue(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * recursiveFnByValue(n - 1);
	}
}

// 2022.7.31(��) 23h50 call by reference�� ����Լ��� ȣ���ϸ� � ���� �����? -> 2022.8.1(��) 2h35 �ϴ� �Ʒ��� ���� �ۼ��� �Լ��� call by value�� ����Լ� ȣ���ϴ� ���� ��� ���̴� ���� �� ������..
int recursiveFnByReference(int* n) {
	if (*n <= 1) {
		return 1;
	}
	else {
		int m = *n - 1;
		// int* mpointer = &m;
		return (*n) * recursiveFnByReference(&m);
	}
}