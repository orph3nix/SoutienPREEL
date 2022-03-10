#pragma once
#include "Point.h"
#include <string.h>
#include <string>

using namespace std;

class Pixel:public Point
{
protected:string color;

public:Pixel(int x, int y, string color)
	:Point(x, y)
	{
	this->color = color;
	}

	  Pixel(Point point, string color)
		  :Point(point.getx(), point.gety())
	  {
	  }
};

