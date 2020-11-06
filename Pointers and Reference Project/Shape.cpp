#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape() //overloaded constructor
{
	length = 0;
	width = 0;
}

Shape::Shape(float x, float y) //overloaded constructor
{
	length = x;
	width = y;
}

Shape::~Shape() 
{

}

void Shape::set_Length(float x)
{
	length = x;
}

void Shape::set_Width(float x)
{
	width = x;
}

float Shape::get_Length()
{
	return length;
}

float Shape::get_Width()
{
	return width;
}

float Shape::get_Perimeter()
{
	return 0;

}

float Shape::get_Area()
{
	return 0;

}

float Shape::get_Volume()
{
	return 0;

}