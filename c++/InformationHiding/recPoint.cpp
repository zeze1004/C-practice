#include <iostream>
#include "point.h"

using namespace std;

bool point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}
int point::GetX() const
{
	return x;
}
int point::GetY() const //const: 멤버변수에 저장된 값을 변경하지 않겠다
{
	return y;
}
bool point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}



