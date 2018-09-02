#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"
class circle:public shape
{
private:
	int radius;
public:
	void accept();
	void calarea();
	void calperimeter();
	void display();
};
#endif