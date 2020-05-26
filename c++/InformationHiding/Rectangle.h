#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "point.h"

class Rectangle
{
public:
	bool InitMembers(const point& ul, const point& lr);
	void ShowRecInfo() const;

private:
	point upLeft;
	point lowRight;
};

#endif // !__RECTANGLE_H_
