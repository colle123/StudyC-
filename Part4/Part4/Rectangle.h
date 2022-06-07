#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.h"

class Rectangle {

private:
	Point upLeft;
	Point lowRight;
	//const int n; �ʱ�ȭ�� �ȵ����Ƿ� ���ȭ��Ű�� ����� ����. �̷��� �׳� ���°� ����� ���µ� ��ü�� ������ ���� ������ ��.
	// ��ü�� ������ų �� �ٷ� �ʱ�ȭ�� ���������.

public:
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecInfo() const;

};

#endif
