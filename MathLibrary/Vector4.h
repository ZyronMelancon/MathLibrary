#pragma once

class Vector4									//3D homogeneous Vector
{
public:
	float m_x;									//4 points of space (floats)
	float m_y;
	float m_z;
	float m_w;

	Vector4();									//Default constructor
	Vector4(float x, float y, float z, float w);//Takes in 4 floating point numbers
	float dot(Vector4 other);					//Dot product calculator
	Vector4 cross(Vector4 other);				//Cross product calculator
	float magnitude();							//Magnitude calculator
	void normalise();							//Normalise function
	//void print();								//Prints to console in x, y, z, w format
	Vector4 operator + (Vector4 other);
	Vector4 operator - (Vector4 other);			//All mathematical operator overloads
	//Vector4 operator * (Matrix4 other);
	Vector4 operator * (float m);
	Vector4 operator / (float d);
};