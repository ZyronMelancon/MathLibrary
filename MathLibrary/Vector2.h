#pragma once
#include <math.h>
class Vector2									//2D Vector
{
public:
	float m_x;									//2 points in space (floats)
	float m_y;

	Vector2();									//Default constructor
	Vector2(float x, float y);					//Takes in two floating point numbers
	float dot(Vector2 other);					//Dot product calculator
	float magnitude();							//Magnitude calculator
	void normalise();							//Normalize function
	//void print();								//Prints to console in x, y format
	Vector2 operator + (Vector2 other);
	Vector2 operator - (Vector2 other);			//All mathematical operator overloads
	//Vector2 operator * (Matrix2 other);
	Vector2 operator * (float m);
	Vector2 operator / (float d);
};

