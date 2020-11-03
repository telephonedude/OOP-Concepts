#pragma once
#include "Shape.h"
class Sphere :
    public Shape
{
public:
    Sphere(float x);
    float get_Perimeter();
    float get_Area();
    float get_Volume();
};

