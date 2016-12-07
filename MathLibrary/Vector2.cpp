#include "Vector2.h"
Vector2::Vector2()
{
	m_x = 0;
	m_y = 0;
}

Vector2::Vector2(float x, float y)
{
	m_x = x;
	m_y = y;
}

float Vector2::dot(Vector2 other)
{
	return m_x * other.m_x + m_y * other.m_y;
}

float Vector2::magnitude()
{
	return sqrt((m_x*m_x) + (m_y*m_y));
}

void Vector2::normalise()
{
	m_x = m_x / Vector2::magnitude();
	m_y = m_y / Vector2::magnitude();
}

//void Vector2::print()
//{
//	std::cout << m_x << ", " << m_y << std::endl;
//}

Vector2 Vector2::operator + (Vector2 other)
{
	return Vector2(m_x + other.m_x, m_y + other.m_y);
}

Vector2 Vector2::operator - (Vector2 other)
{
	return Vector2(m_x - other.m_x, m_y - other.m_y);
}

//Vector2 Vector2::operator * (Matrix2 other)
//{
//	return Vector2(m_x * other.m_a.m_x + m_y * other.m_a.m_y,
//		m_x * other.m_b.m_x + m_y * other.m_b.m_y);
//}

Vector2 Vector2::operator*(float m)
{
	return Vector2(m_x * m, m_y * m);
}

Vector2 Vector2::operator/(float d)
{
	return Vector2(m_x / d, m_y / d);
}
