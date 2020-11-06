#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Shape.h"
#include "Cube.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Pyramid.h"

using namespace std;

    void print_Perimeter(Shape *shp);
    void print_Area(Shape *shp);
    void print_Volume(Shape *shp);

    int main()
    {
        Cube *cb1 = new Cube(10); //Inherited classes from class Shape
        Cube *cb2 = new Cube(20);
        Shape* sh1 = new Shape(10, 10);
        Shape *sh2 = new Shape(80, 100);
        *sh1 = *sh2 + *sh1; //Overloaded operator
        cout << sh1->get_Width() << endl;
    }

    void print_Perimeter(Shape *shp) { //Polymorphism
        cout << shp->get_Perimeter() << " m" << endl;
    }

    void print_Area(Shape *shp) { //Polymorphism
        cout << shp->get_Area() << " m^2" << endl;
    }

    void print_Volume(Shape *shp) { //Polymorphism
        cout << shp->get_Volume() << " m^3" << endl;
    }