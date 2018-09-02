
#include"triangle.h"
void triangle::accept()
{
	cout << "Enter base and height\n";
	cin >> this->base;
	cin >> this->height;
}
void triangle::calarea()
{
	this->area = (0.5*base*height);
}
void triangle::calperimeter()
{
	this->perimeter = (base+sqrt(base*base+4*height*height));
}
void triangle::display()
{
	cout << "\narea=" << this->area << "\nPerimeter " << this->perimeter;
}