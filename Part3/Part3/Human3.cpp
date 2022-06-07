/* CPP Struct를 Class로 변경 */

#include <stdio.h>

class human { // 외부에서 멤버를 함부로 건들일 수가 없음. 은닉, 캡슐

public: // 주석처리하면 오류발생 - public을 써줌으로서 외부에서 접근을 허용해줌
	    // 멤버들은 default로 private 초기화(외부에서 접근 금지)
	char name[20];
	int age;
	char job[10];

	// 생성자의 역할 : 초기화
	void ShowData() {

		printf("이름 : %s, 나이 : %d, 직업 : %s\n", name, age, job);
		// 구조체 안에서 직접 받기 때문에 매개변수나 멤버 앞에 구조체 이름 + 멤버접근지정자를 안 붙여도 됨
	}

};

int main() {

	human h1 = { "홍길동", 100, "학생" }; // Class로 바꾸면 Class 외부에서 직접 접근을 못함 -> 은닉성이 적용됨

	h1.ShowData();

	return 0;
}

// 뭐 받아오고, 기능이 뭐고, 작동이 어떻게 되고, 이걸 공정에서 어떻게 쓰고