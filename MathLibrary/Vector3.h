#pragma once

class Vector3									//3D Vector
{
public:
	float m_x;									//3 points in space (floats)
	float m_y;
	float m_z;

	Vector3();									//Default constructor
	Vector3(float x, float y, float z);			//Takes in 3 floating point numbers
	float dot(Vector3 other);					//Dot product calculator
	Vector3 cross(Vector3 other);				//Cross product calculator
	float magnitude();							//Magnitude calculator
	void normalise();							//Normalise function
	//void print();								//Prints to console in x, y, z format
	Vector3 operator + (Vector3 other);
	Vector3 operator - (Vector3 other);			//All mathematical operator overloads
	//Vector3 operator * (Matrix3 other);
	Vector3 operator * (float m);
	Vector3 operator / (float d);
};