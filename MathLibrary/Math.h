#pragma once
#include <iostream>

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
	void print();								//Prints to console in x, y, z, w format
	Vector4 operator + (Vector4 & other);		
	Vector4 operator - (Vector4 & other);		//All mathematical operator overloads
	Vector4 operator * (Vector4 & other);
	Vector4 operator * (float m);
	Vector4 operator / (float d);
};

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
	void print();								//Prints to console in x, y, z format
	Vector3 operator + (Vector3 & other);
	Vector3 operator - (Vector3 & other);		//All mathematical operator overloads
	Vector3 operator * (Vector3 & other);
	Vector3 operator * (float m);
	Vector3 operator / (float d);
};

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
	void print();								//Prints to console in x, y format
	Vector2 operator + (Vector2 & other);
	Vector2 operator - (Vector2 & other);		//All mathematical operator overloads
	Vector2 operator * (Vector2 & other);
	Vector2 operator * (float m);
	Vector2 operator / (float d);
};

class Matrix2									//2 x 2 rotation Matrix
{
private:
	Vector2 m_a;								//Row 1
	Vector2 m_b;								//Row 2
public:
	Matrix2() {}								//Default constructor
	Matrix2(Vector2 a, Vector2 b);				//Takes in two Vector2s
	Matrix2(float a, float b, float c, float d);//Takes in 4 floating point numbers
	void Print();								//Prints to console in a 2 x 2 grid format
	Matrix2 operator * (Matrix2 other);			//Operator overload for multiplication of similar matrices
};

class Matrix3									//3 x 3 rotation Matrix
{
private:
	Vector3 m_a;								//Row 1
	Vector3 m_b;								//Row 2
	Vector3 m_c;								//Row 3
public:
	Matrix3() {}								//Default constructor
	Matrix3(Vector3 a, Vector3 b, Vector3 c);	//Takes in 3 Vector3s
	Matrix3(float a, float b, float c, float d, 
	float e, float f, float g, float h, float i);//Takes in 9 individual floats
	void Print();								//Prints to console in a 3 x 3 grid format
	Matrix3 operator * (Matrix3 o);				//Operator overload for multiplication of similar matrices
	void setRotatex(float r);
	void setRotateY(float r);
	void setRotateZ(float r);
};

class Matrix4									//4 x 4 transform Matrix
{
private:
	Vector4 m_a;								//Row 1
	Vector4 m_b;								//Row 2
	Vector4 m_c;								//Row 3
	Vector4 m_d;								//Row 4
public:
	Matrix4() {}								//Default constructor
	Matrix4(Vector4 a, Vector4 b, Vector4 c, Vector4 d);//Takes in 4 Vector4s
	Matrix4(float a, float b, float c, float d,	//Takes in 16 individual floats
		float e, float f, float g, float h,
		float i, float j, float k, float l,
		float m, float n, float o, float p);
	Matrix4 operator * (Matrix4 o);				//Operator overload for multiplication of similar matrices
	void setRotateX(float r);
	void setRotateY(float r);
	void setRotateZ(float r);
};