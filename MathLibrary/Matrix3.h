#pragma once
#include "Vector3.h"
class Matrix3									//3 x 3 rotation Matrix
{
public:
	Vector3 m_a;								//Row 1
	Vector3 m_b;								//Row 2
	Vector3 m_c;								//Row 3

	Matrix3() {}								//Default constructor
	Matrix3(Vector3 a, Vector3 b, Vector3 c);	//Takes in 3 Vector3s
	Matrix3(float a, float b, float c, float d,
		float e, float f, float g, float h, float i);//Takes in 9 individual floats
	void Print();								//Prints to console in a 3 x 3 grid format
	Matrix3 operator * (Matrix3 o);				//Operator overload for multiplication of similar matrices
	void setRotatex(float r);
	void setRotateY(float r);					//Set rotation on any axis
	void setRotateZ(float r);
};