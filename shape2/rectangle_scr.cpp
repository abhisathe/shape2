
#include"rectangle.h"
void rectangle::accept()
{
	cout << "Enter breadth and length\n";
	cin >> this->length;
	cin >> this->breadth;
}
void rectangle::calarea()
{
	this->area = length*breadth;
}
void rectangle::calperimeter()
{
	this->perimeter =2*(length*breadth);
}
void rectangle::display()
{
	cout << "\narea=" << this->area << "\nPerimeter " << this->perimeter;
}