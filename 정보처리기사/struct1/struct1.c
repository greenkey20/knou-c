/* 2022.7.16(��) 23h50
* 6-58 ����ü(structure)
* ���� �ٸ� �ڷ����� ���� �ڷ��� ������ �ϳ��� �ڷ������� �����ؼ� ����ϴ� �ڷ���
* ����ڰ� �⺻ Ÿ���� ������ ���Ӱ� ������ �� �ִ�, ����� ���� �ڷ���
*  
* ����ü�� ������
*/

#include <stdio.h>

struct Student {
	char gender;
	char name[8];
	int age;
	int num;
};

void main() {
	struct Student s;
	s.gender = 'F';
	s.name = "�����";
	s.age = 4;
}