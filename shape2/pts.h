#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"triangle.h"
class printtoscreen
{
public:
	static void printarea(shape *s)
	{
		if (typeid(*s) == typeid(triangle))
		{
			triangle *tp = dynamic_cast<triangle*>(s);
			
			tp->accept();
			tp->calarea();
			tp->calperimeter();
			tp->display();
		}

		if (typeid(*s) == typeid(circle))
		{
			circle *cp = dynamic_cast<circle*>(s);

			cp->accept();
			cp->calarea();
			cp->calperimeter();
			cp->display();
		}
		if (typeid(*s) == typeid(rectangle))
		{
			rectangle *rp = dynamic_cast<rectangle*>(s);

			rp->accept();
			rp->calarea();
			rp->calperimeter();
			rp->display();
		}
	}
	
};