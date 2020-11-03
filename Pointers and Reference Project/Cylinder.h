#pragma once
#include "Shape.h"
class Cylinder :
    public Shape
{
public:
    Cylinder(float x, float y);
    float get_Perimeter();
    float get_Area();
    float get_Volume();
};

