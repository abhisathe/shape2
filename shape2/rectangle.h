#ifndef RECTANGLE_H
#define RECTANGLE_H


#include"shape.h"
class rectangle :public shape
{
private:
	int length, breadth;
public:
	void accept();
	void calarea();
	void calperimeter();
	void display();
};

#endif