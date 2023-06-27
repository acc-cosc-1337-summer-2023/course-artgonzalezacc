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

using std::vector;

int main() 
{
	vector<Shape*> shapes;
	
	Shape* shape;

	Circle circle;
	circle.draw();
	shapes.push_back(&circle);

	shape = &circle;
	shape->draw();

	Line line;
	line.draw();

	shape = &line;
	shape->draw();
	shapes.push_back(&line);

	std::cout<<"\n\nVector output\n\n";

	for(auto shape: shapes)
	{
		shape->draw();
	}

	return 0;
}