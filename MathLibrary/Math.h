#pragma once
#include <iostream>

class Vector
{
public:
	float m_x;
	float m_y;
	float m_z;
	float m_w;

	Vector()
	{
		m_x = 0;
		m_y = 0;
		m_z = 0;
		m_w = 0;
	}
	Vector(float xin, float yin);
	Vector(float xin, float yin, float zin);
	Vector(float xin, float yin, float zin, float win);

	Vector operator + (Vector & other)
	{
		return Vector(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z);
	}

	Vector operator - (Vector & other)
	{
		return Vector(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z);
	}

	Vector operator * (Vector & other)
	{
		return Vector(m_x * other.m_x, m_y * other.m_y, m_z * other.m_z);
	}

	Vector operator * (float m)
	{
		return Vector(m_x * m, m_y * m, m_z * m);
	}

	Vector operator / (float d)
	{
		return Vector(m_x / d, m_y / d, m_z / d);
	}
};

class Matrix
{
private:
	Vector m_a;
	Vector m_b;
	Vector m_c;
	Vector m_d;
public:
	Matrix() {}
	Matrix(Vector a, Vector b);
	Matrix(Vector a, Vector b, Vector c);
	Matrix(Vector a, Vector b, Vector c, Vector d);

	Matrix operator * (Matrix other)
	{	
		Vector newA = { m_a.m_x * other.m_a.m_x + m_a.m_y * other.m_b.m_x, m_a.m_x * other.m_b.m_y + m_a.m_y * other.m_b.m_y };
		Vector newB = { m_b.m_x * other.m_a.m_x + m_b.m_y * other.m_b.m_x, m_b.m_x * other.m_a.m_y + m_b.m_y * other.m_b.m_y };
		Matrix newMatrix = { newA, newB };
	}
};