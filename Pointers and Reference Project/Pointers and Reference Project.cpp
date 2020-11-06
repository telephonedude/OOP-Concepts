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
        cout << cb2->get_Area() << endl;
        cout << cb1->get_Volume() << endl;
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