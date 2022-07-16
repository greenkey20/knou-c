/* 2022.7.16(토) 23h50
* 6-58 구조체(structure)
* 서로 다른 자료형을 갖는 자료의 모임을 하나의 자료형으로 정의해서 사용하는 자료형
* 사용자가 기본 타입을 가지고 새롭게 정의할 수 있는, 사용자 정의 자료형
*  
* 구조체와 포인터
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
	s.name = "강토미";
	s.age = 4;
}