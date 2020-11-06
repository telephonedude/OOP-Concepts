#pragma once
class Shape
{
public: //shape is now an abstract class
	Shape();
	Shape(float x, float y);
	~Shape();
	void set_Length(float x);
	void set_Width(float x);
	float get_Length();
	float get_Width();
	virtual float get_Perimeter() =0;
	virtual float get_Area() =0;
	virtual float get_Volume()=0;
	
protected:
	float length;
	float width;
};

