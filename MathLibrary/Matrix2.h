#pragma once

#include "Vector2.h"

class Matrix2									//2 x 2 rotation Matrix
{
public:
	
	Vector2 m_a;								//Row 1
	Vector2 m_b;								//Row 2

	Matrix2();							//Default constructor
	Matrix2(Vector2 a, Vector2 b);				//Takes in two Vector2s
	Matrix2(float a, float b, float c, float d);//Takes in 4 floating point numbers
	void Print();								//Prints to console in a 2 x 2 grid format
	Matrix2 operator * (Matrix2 other);			//Operator overload for multiplication of similar matrices
};