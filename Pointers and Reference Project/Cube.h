#pragma once
#include "Shape.h"
class Cube :
    public Shape
{
public:
    Cube(float x);
    ~Cube();
    float get_Perimeter();
    float get_Area();
    float get_Volume();
};

