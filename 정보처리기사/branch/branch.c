/* 2022.7.14(��) 0h40
* 6-55 loop(�ݺ���) ���� ��ɾ�
* 1. break
* 2. continue
*/

#include <stdio.h>
void main() {
	// break ����
	int i = 0;
	while (i < 10) {
		printf("break ���� %d��° loop -> ", i);
		i++;
		if (i == 7) {
			printf("while��(���� ����� �ݺ���)�� ���� ���������ϴ�\n");
			break;
		}
		printf("%d\n", i);
	}

	// continue ����
	i = 0;
	while (i < 10) {
		printf("continue ���� %d��° loop -> ", i);
		i++;
		if (i == 7) {
			printf("�ݺ��� continue�մϴ�~\n");
			continue; // ���� ����� �ݺ���(������ �κ�)���� ���ư�
		}
		printf("%d\n", i);
	}
}