/* 2022.6.30(��) 23h50 ����ó����� �Ǳ� ����
* 6-20 ���ڿ� ���� �� ���� �� 2���� �迭 ���
*/
#include <stdio.h>
void main() {
	char a[2][8] = { "Hello", "Soojebi" };
	printf("%s\n", a); // Hello
	printf("%s\n", a[0]); // Hello
	printf("%s\n", a[1]); // Soojebi
	
	a[0][4] = NULL;
	printf("%s\n", a[0]); // Hell
	printf("%s\n", a[0] + 2); // ll
	printf("%s\n", a[1] + 3); // jebi
}