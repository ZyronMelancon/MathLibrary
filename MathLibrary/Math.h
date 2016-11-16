#pragma once
#include <iostream>

class Vector4
{
public:
	float m_x;
	float m_y;
	float m_z;
	float m_w;

	Vector4();
	Vector4(float x, float y, float z, float w);
	float DotProduct(Vector4 other);
	Vector4 CrossProduct(Vector4 other);
	float Magnitude();
	void Normalise();
	void Print();

	Vector4 operator + (Vector4 & other)
	{
		return Vector4(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z, m_w + other.m_w);
	}

	Vector4 operator - (Vector4 & other)
	{
		return Vector4(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z, m_w - other.m_w);
	}

	Vector4 operator * (Vector4 & other)
	{
		return Vector4(m_x * other.m_x, m_y * other.m_y, m_z * other.m_z, m_w * other.m_w);
	}

	Vector4 operator * (float m)
	{
		return Vector4(m_x * m, m_y * m, m_z * m, m_w * m);
	}

	Vector4 operator / (float d)
	{
		return Vector4(m_x / d, m_y / d, m_z / d, m_w / d);
	}
};

class Vector3
{
public:
	float m_x;
	float m_y;
	float m_z;

	Vector3();
	Vector3(float x, float y, float z);
	float DotProduct(Vector3 other);
	Vector3 CrossProduct(Vector3 other);
	float Magnitude();
	void Normalise();
	void Print();

	Vector3 operator + (Vector3 & other)
	{
		return Vector3(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z);
	}

	Vector3 operator - (Vector3 & other)
	{
		return Vector3(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z);
	}

	Vector3 operator * (Vector3 & other)
	{
		return Vector3(m_x * other.m_x, m_y * other.m_y, m_z * other.m_z);
	}

	Vector3 operator * (float m)
	{
		return Vector3(m_x * m, m_y * m, m_z * m);
	}

	Vector3 operator / (float d)
	{
		return Vector3(m_x / d, m_y / d, m_z / d);
	}
};

class Vector2
{
public:
	float m_x;
	float m_y;

	Vector2();
	Vector2(float x, float y);
	float DotProduct(Vector2 other);
	float Magnitude();
	void Normalise();
	void Print();

	Vector2 operator + (Vector2 & other)
	{
		return Vector2(m_x + other.m_x, m_y + other.m_y);
	}

	Vector2 operator - (Vector2 & other)
	{
		return Vector2(m_x - other.m_x, m_y - other.m_y);
	}

	Vector2 operator * (Vector2 & other)
	{
		return Vector2(m_x * other.m_x, m_y * other.m_y);
	}

	Vector2 operator * (float m)
	{
		return Vector2(m_x * m, m_y * m);
	}

	Vector2 operator / (float d)
	{
		return Vector2(m_x / d, m_y / d);
	}
};

class Matrix2
{
private:
	Vector2 m_a;
	Vector2 m_b;
public:
	Matrix2() {}
	Matrix2(Vector2 a, Vector2 b);
	Matrix2(float a, float b, float c, float d);

	void Print()
	{
		std::cout << m_a.m_x << ", " << m_a.m_y << std::endl;
		std::cout << m_b.m_x << ", " << m_b.m_y << std::endl;
		system("pause");
	}

	Matrix2 operator * (Matrix2 other)
	{	
		return Matrix2(m_a.m_x * other.m_a.m_x + m_a.m_y * other.m_b.m_x, m_a.m_x * other.m_b.m_y + m_a.m_y * other.m_b.m_y, m_b.m_x * other.m_a.m_x + m_b.m_y * other.m_b.m_x, m_b.m_x * other.m_a.m_y + m_b.m_y * other.m_b.m_y);
	}
};

class Matrix3
{
private:
	Vector3 m_a;
	Vector3 m_b;
	Vector3 m_c;
public:
	Matrix3() {}
	Matrix3(Vector3 a, Vector3 b, Vector3 c);
	Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i);

	void Print()
	{
		std::cout << m_a.m_x << " " << m_a.m_y << " " << m_a.m_z << std::endl;
		std::cout << m_b.m_x << " " << m_b.m_y << " " << m_b.m_z << std::endl;
		std::cout << m_c.m_x << " " << m_c.m_y << " " << m_c.m_z << std::endl;
	}

	Matrix3 operator * (Matrix3 other)
	{
	}
};