/* 2022.7.16(토) 23h50
* 6-57 구조체(structure)
* 서로 다른 자료형을 갖는 자료의 모임을 하나의 자료형으로 정의해서 사용하는 자료형
* 사용자가 기본 타입을 가지고 새롭게 정의할 수 있는, 사용자 정의 자료형
*/

#include <stdio.h>

struct Student {
	char name[8]; // 이름
	char gender; // 성별
	int age; // 나이
	int num; // 학번
};

void main() { // 반환 값 없는 함수
	struct Student s1;
	
	// s.name[] = "강토미";
	// 2022.7.17(일) 0h5 구조체 Student의 멤버 name을 참조하려면, 문자열 처리 시 사용하는 문자열 복사함수 strcpy() 사용(knou c 교재 p.231)
	strcpy(s1.name, "강토미");
	
	s1.gender = 'F';
	s1.age = 4;
	s1.num = 202134123;

	printf("%s\n", s1.name); // 강토미
	printf("%c\n", s1.gender); // F
	printf("%d\n", s1.age); // 4
	printf("%d\n", s1.num); // 202134123

	/* 2022.7.17(일) 0h10
	* 6-58 구조체 + 포인터
	*/
	struct Student s2 = {"강로리", 'F', 5};
	struct Student* p2 = &s2;
	printf("%s %c %d %d\n", s2.name, s2.gender, s2.age, s2.num);
	printf("%s %c %d %d\n", (&s2)->name, (&s2)->gender, (&s2)->age, (&s2)->num);

	printf("%s %c %d %d\n", p2->name, p2->gender, p2->age, p2->num);
	printf("%s %c %d %d\n", (*p2).name, (*p2).gender, (*p2).age, (*p2).num);
	printf("%s %c %d %d\n", p2[0].name, p2[0].gender, p2[0].age, p2[0].num);

	/* 2022.7.18(월) 23h50
	* 6-59 1차원 구조체 배열 + 포인터
	*/
	struct Student s[3] = { "강판다", 'M', 3, 202134999, "강혁", 'M', 5, 202134998, "강미피", 'F', 4, 202134997 }; // struct Student라는 자료형/타입을 3개 가지고 있는 배열 s 선언 및 초기화
	struct Student* p = s; // p라는 포인터 변수에 s의 주소 저장

	printf("학생 이름 : %s, 성별 : %c, 나이 : %d, 학번 : %d\n", s[0].name, s[0].gender, s[0].age, s[0].num); // 배열 s의 첫번째 원소로 담겨있는 구조체의 속성 값들을 출력
}