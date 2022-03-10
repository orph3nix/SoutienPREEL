#pragma once
class Point
{
	protected:
		int x;
		int y;

public:Point(int x, int y) {
	this->x = x;
	this->y = y;
}

	  int getx() {
		  return this->x;
	  }

	  int gety() {
		  return this->y;
	  }

};

