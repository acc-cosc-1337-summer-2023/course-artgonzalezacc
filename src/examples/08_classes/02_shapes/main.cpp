//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape* shape;

	Circle circle;
	circle.draw();

	shape = &circle;
	shape->draw();

	Line line;
	line.draw();

	shape = &line;
	shape->draw();

	return 0;
}