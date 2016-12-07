#include "Matrix3.h"
#include "Vector3.h"
#include <iostream>

Matrix3::Matrix3(Vector3 a, Vector3 b, Vector3 c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}

Matrix3::Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	m_a = { a, b, c };
	m_b = { d, e, f };
	m_c = { g, h, i };
}

void Matrix3::Print()
{
	std::cout << m_a.m_x << " " << m_a.m_y << " " << m_a.m_z << std::endl;
	std::cout << m_b.m_x << " " << m_b.m_y << " " << m_b.m_z << std::endl;
	std::cout << m_c.m_x << " " << m_c.m_y << " " << m_c.m_z << std::endl;
}

Matrix3 Matrix3::operator*(Matrix3 o)
{
	Vector3 newA = { m_a.m_x * o.m_a.m_x + m_a.m_y * o.m_b.m_x + m_a.m_z * o.m_c.m_x,
		m_a.m_x * o.m_a.m_y + m_a.m_y * o.m_b.m_y + m_a.m_z * o.m_c.m_y,
		m_a.m_x * o.m_a.m_z + m_a.m_y * o.m_b.m_z + m_a.m_z * o.m_c.m_z };
	Vector3 newB = { m_b.m_x * o.m_a.m_x + m_b.m_y * o.m_b.m_x + m_b.m_z * o.m_c.m_x,
		m_b.m_x * o.m_a.m_y + m_b.m_y * o.m_b.m_y + m_b.m_z * o.m_c.m_y,
		m_b.m_x * o.m_a.m_z + m_b.m_y * o.m_b.m_z + m_b.m_z * o.m_c.m_z };
	Vector3 newC = { m_c.m_x * o.m_a.m_x + m_c.m_y * o.m_b.m_x + m_c.m_z * o.m_c.m_x,
		m_c.m_x * o.m_a.m_y + m_c.m_y * o.m_b.m_y + m_c.m_z * o.m_c.m_y,
		m_c.m_x * o.m_a.m_z + m_c.m_y * o.m_b.m_z + m_c.m_z * o.m_c.m_z };
	return Matrix3(newA, newB, newC);
}

void Matrix3::setRotatex(float r)
{
	m_b.m_y = cos(r);
	m_b.m_z = -sin(r);
	m_c.m_y = sin(r);
	m_c.m_z = cos(r);
}

void Matrix3::setRotateY(float r)
{
	m_a.m_x = cos(r);
	m_a.m_z = sin(r);
	m_c.m_x = -sin(r);
	m_c.m_z = cos(r);
}

void Matrix3::setRotateZ(float r)
{
	m_a.m_x = cos(r);
	m_a.m_y = -sin(r);
	m_b.m_x = sin(r);
	m_b.m_y = cos(r);
}

