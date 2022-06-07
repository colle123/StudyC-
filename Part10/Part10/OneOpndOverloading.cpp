#include <iostream>
using namespace std;

class Point {

private:
	int xpos, ypos;

public:

	Point(int x=0, int y=0) : xpos(x), ypos(y){ }

	void ShowPosition() const {

		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++() {

		xpos += 1;
		ypos += 1;
		return *this;
	}

	friend Point& operator--(Point& ref);

	friend ostream& operator<<(ostream& os, const Point& other);
};

Point& operator--(Point& ref) {

	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

ostream& operator<<(ostream& os, const Point& other) { // ostream은 stdout 같은 출력버퍼임

	os << '[' << other.xpos << ", " << other.ypos << ']';

	return os;
}

int main() {

	Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	//pos.ShowPosition();

	cout << pos << endl;

	return 0;
}