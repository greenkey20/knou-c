/* 2022.7.15(��) 23h50
* 6-56 �ڷ��� �� �ϳ��� ����ü/������(enumeration)
* ������ ���� �� �ִ� ���� ������ ���� ��
* ������ ���� �� �ִ� ���� ������ ������ �ִ� ��� ���
*/

#include <stdio.h>

enum Week {
	Sunday,
	Monday,
	Tuesday = 5,
	Wednesday
};

void main() {
	enum Week week;
	week = Wednesday;
	printf("%d", week); // 6
}