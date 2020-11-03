#include "Cube.h"
using namespace std;

Cube::Cube(float x):Shape(x,x)
{
	
}

float Cube::get_Perimeter()
{
	return ((width) * 4);
}

float Cube::get_Area()
{
	return ((width * width) * 6);
}

float Cube::get_Volume()
{
	return (width * width * width);
}