#include "Cylinder.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

Cylinder::Cylinder(float x, float y):Shape(x, y)
{

}

float Cylinder::get_Perimeter()
{
	return  (2 * M_PI * (width / 2));
}

float Cylinder::get_Area()
{
	return (2 * M_PI * (width / 2) * length) + 2 * M_PI * ((width / 2) * (width / 2));
}

float Cylinder::get_Volume()
{
	return (M_PI * ((width / 2) * (width / 2)) * length);
}
