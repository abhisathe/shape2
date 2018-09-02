#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"triangle.h"
#include<conio.h>
#include"pts.h"
void main()
{
	/*triangle t;
	t.accept();
	t.calarea();
	t.calperimeter();
	t.display();*/
	triangle t1;
	rectangle r;
	circle c;
	shape *s[3];
	s[0] = &t1;
	s[1] = &r;
	s[2] = &c;
	
	for (int i = 0; i < 3; i++)
	{
		printtoscreen::printarea(s[i]);
	}
	cout << "\n";


	_getch();
}