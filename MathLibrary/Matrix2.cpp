#include "Matrix2.h"
#include <iostream>
class Vector2;

Matrix2::Matrix2()
{
}

Matrix2::Matrix2(Vector2 a, Vector2 b)
{
	m_a = a;
	m_b = b;
}

Matrix2::Matrix2(float a, float b, float c, float d)
{
	m_a = Vector2(a, b);
	m_b = Vector2(c, d);
}

void Matrix2::Print()
{
	std::cout << m_a.m_x << ", " << m_a.m_y << std::endl;
	std::cout << m_b.m_x << ", " << m_b.m_y << std::endl;
}

Matrix2 Matrix2::operator*(Matrix2 other)
{
	return Matrix2(m_a.m_x * other.m_a.m_x + m_a.m_y * other.m_b.m_x,
		m_a.m_x * other.m_b.m_y + m_a.m_y * other.m_b.m_y,
		m_b.m_x * other.m_a.m_x + m_b.m_y * other.m_b.m_x,
		m_b.m_x * other.m_a.m_y + m_b.m_y * other.m_b.m_y);
}
