#pragma once
#include "Vector4.h"
class Matrix4									//4 x 4 transform Matrix
{
public:
	Vector4 m_a;								//Row 1
	Vector4 m_b;								//Row 2
	Vector4 m_c;								//Row 3
	Vector4 m_d;								//Row 4

	Matrix4() {}								//Default constructor
	Matrix4(Vector4 a, Vector4 b, Vector4 c, Vector4 d);//Takes in 4 Vector4s
	Matrix4(float a, float b, float c, float d,	//Takes in 16 individual floats
		float e, float f, float g, float h,
		float i, float j, float k, float l,
		float m, float n, float o, float p);
	Matrix4 operator * (Matrix4 o);				//Operator overload for multiplication of similar matrices
	void setRotateX(float r);
	void setRotateY(float r);					//Set rotation on any axis
	void setRotateZ(float r);
};