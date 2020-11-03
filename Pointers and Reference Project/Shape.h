#pragma once
class Shape
{
public:
	Shape();
	Shape(float x, float y);
	~Shape();
	Shape operator+(const Shape b);
	void set_Length(float x);
	void set_Width(float x);
	float get_Length();
	float get_Width();
	virtual float get_Perimeter();
	virtual float get_Area();
	virtual float get_Volume();
	
protected:
	float length;
	float width;
};

