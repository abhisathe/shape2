#ifndef SHAPE_H

#define SHAPE_H


#include<iostream>
using namespace std;
class shape
{
protected:
	double area, perimeter;
public:
	virtual void calarea()=0;
	virtual void calperimeter()=0;
	void display()
	{
		cout << "in bassseee";
	}
};
#endif