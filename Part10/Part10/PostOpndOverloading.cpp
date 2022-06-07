#include <iostream>
using namespace std;

class Point {

private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y){ }

	void ShowPosition() const {

		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++() {

		xpos += 1;
		ypos += 1;

		return *this;
	}

	const Point operator++(int) {

		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}

	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point& ref) {

	ref.xpos -= 1;
	ref.ypos -= 1;

	return ref;
}

const Point operator--(Point& ref, int) { // 후위 연산자에는 const가 붙는데 이건 반환하는 retobj값이 복사한 ref값과 달라지면 안되기 때문에 const를 붙여줌
	                                      // a = num++ 처럼 a는 num과 값이 똑같아야하고 num은 a에 대입 된 후 1이 증가해야하므로, 대입을 통해 복사생성자를 생성하고 그 후 후위연산, 값의 변화가 없는 복사생성자를 반환해줌.

	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;

	return retobj;
}

int main() {

	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}