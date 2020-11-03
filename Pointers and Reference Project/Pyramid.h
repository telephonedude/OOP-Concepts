#pragma once
#include "Shape.h"
class Pyramid :
    public Shape
{
public:
    Pyramid(float x, float y);
    float get_Perimeter();
    float get_Area();
    float get_Volume();
};

