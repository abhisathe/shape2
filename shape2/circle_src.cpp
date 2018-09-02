#include"circle.h"
void circle::accept()
{
	cout << "Enter radius\n";
	cin >> this->radius;
}
void circle::calarea()
{
	this->area = (3.14*radius*radius);
}
void circle::calperimeter()
{
	this->perimeter = (2 * 3.14*radius);
}
void circle::display()
{
	cout << "\narea=" << this->area << "\nPerimeter " << this->perimeter;
}