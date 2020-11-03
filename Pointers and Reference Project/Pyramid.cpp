#include "Pyramid.h"
using namespace std;

Pyramid::Pyramid(float x, float y):Shape(x,y)
{

}

float Pyramid::get_Perimeter()
{
	return length + length + width;
}

float Pyramid::get_Area()
{
	return 0;
}

float Pyramid::get_Volume()
{
	return 0;
}
