/* 2022.7.16(��) 23h50
* 6-57 ����ü(structure)
* ���� �ٸ� �ڷ����� ���� �ڷ��� ������ �ϳ��� �ڷ������� �����ؼ� ����ϴ� �ڷ���
* ����ڰ� �⺻ Ÿ���� ������ ���Ӱ� ������ �� �ִ�, ����� ���� �ڷ���
*/

#include <stdio.h>

struct Student {
	char name[8]; // �̸�
	char gender; // ����
	int age; // ����
	int num; // �й�
};

void main() { // ��ȯ �� ���� �Լ�
	struct Student s1;
	
	// s.name[] = "�����";
	// 2022.7.17(��) 0h5 ����ü Student�� ��� name�� �����Ϸ���, ���ڿ� ó�� �� ����ϴ� ���ڿ� �����Լ� strcpy() ���(knou c ���� p.231)
	strcpy(s1.name, "�����");
	
	s1.gender = 'F';
	s1.age = 4;
	s1.num = 202134123;

	printf("%s\n", s1.name); // �����
	printf("%c\n", s1.gender); // F
	printf("%d\n", s1.age); // 4
	printf("%d\n", s1.num); // 202134123

	/* 2022.7.17(��) 0h10
	* 6-58 ����ü + ������
	*/
	struct Student s2 = {"���θ�", 'F', 5};
	struct Student* p2 = &s2;
	printf("%s %c %d %d\n", s2.name, s2.gender, s2.age, s2.num);
	printf("%s %c %d %d\n", (&s2)->name, (&s2)->gender, (&s2)->age, (&s2)->num);

	printf("%s %c %d %d\n", p2->name, p2->gender, p2->age, p2->num);
	printf("%s %c %d %d\n", (*p2).name, (*p2).gender, (*p2).age, (*p2).num);
	printf("%s %c %d %d\n", p2[0].name, p2[0].gender, p2[0].age, p2[0].num);

	/* 2022.7.18(��) 23h50
	* 6-59 1���� ����ü �迭 + ������
	*/
	struct Student s[3] = { "���Ǵ�", 'M', 3, 202134999, "����", 'M', 5, 202134998, "������", 'F', 4, 202134997 }; // struct Student��� �ڷ���/Ÿ���� 3�� ������ �ִ� �迭 s ���� �� �ʱ�ȭ
	struct Student* p = s; // p��� ������ ������ s�� �ּ� ����

	printf("�л� �̸� : %s, ���� : %c, ���� : %d, �й� : %d\n", s[0].name, s[0].gender, s[0].age, s[0].num); // �迭 s�� ù��° ���ҷ� ����ִ� ����ü�� �Ӽ� ������ ���
}