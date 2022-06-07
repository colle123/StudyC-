#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.h"

class Rectangle {

private:
	Point upLeft;
	Point lowRight;
	//const int n; 초기화가 안됐으므로 상수화시키는 대상이 없음. 이렇게 그냥 쓰는건 상관이 없는데 객체를 생성할 때는 에러가 뜸.
	// 객체를 생성시킬 때 바로 초기화를 시켜줘야함.

public:
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecInfo() const;

};

#endif
