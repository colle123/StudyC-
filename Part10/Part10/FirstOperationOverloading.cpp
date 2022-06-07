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

	Point operator+(const Point& other) {

		Point pos(xpos + other.xpos, ypos + other.ypos);

		return pos;
	}

	Point operator+(int other) {

		return Point(xpos + other, ypos + other);;
	}
	/*Point operator+(const Point& ref) {

		Point pos(xpos + ref.xpos, ypos + ref.ypos);

		return pos;
	}*/
};

int main() {

	Point pos1(3, 4);
	Point pos2(10, 20);
	//Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos1 + pos2;
	Point pos5 = pos1 + 100; // pos1.operator+(100)

	pos1.ShowPosition();
	pos2.ShowPosition();
	//pos3.ShowPosition();
	pos4.ShowPosition();
	pos5.ShowPosition();

	return 0;
}