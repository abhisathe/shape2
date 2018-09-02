#ifndef TRIANGLE_H

#define TRIANGLE_H

#include"shape.h"
class triangle :public shape
{
private:
	int base,height;
public:
	void accept();
	void calarea();
	void calperimeter();
	void display();
}; 
#endif