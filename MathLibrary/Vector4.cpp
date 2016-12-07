#include "Vector4.h"
#include "Matrix4.h"
#include <math.h>
#include <iostream>

Vector4::Vector4()
{
	m_x = 0;
	m_y = 0;
	m_z = 0;
	m_w = 0;
}

Vector4::Vector4(float x, float y, float z, float w)
{
	m_x = x;
	m_y = y;
	m_z = z;
	m_w = w;
}

float Vector4::dot(Vector4 other)
{
	return m_x*other.m_x + m_y*other.m_y + m_z*other.m_z + m_w*other.m_w;
}

Vector4 Vector4::cross(Vector4 other)
{
	return Vector4();
}

float Vector4::magnitude()
{
	return sqrt(m_x*m_x + m_y*m_y + m_z*m_z + m_w*m_w);
}

void Vector4::normalise()
{
	m_x = m_x / Vector4::magnitude();
	m_y = m_y / Vector4::magnitude();
	m_z = m_z / Vector4::magnitude();
	m_w = m_w / Vector4::magnitude();
}

//void Vector4::print()
//{
//	std::cout << m_x << ", " << m_y << ", " << m_z << ", " << m_w << std::endl;
//}

Vector4 Vector4::operator+(Vector4 other)
{
	return Vector4(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z, m_w + other.m_w);
}

Vector4 Vector4::operator-(Vector4 other)
{
	return Vector4(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z, m_w - other.m_w);
}
 
//Vector4 Vector4::operator*(Matrix4 other)
//{
//	return Vector4(m_x * other.m_a.m_x + m_y * other.m_a.m_y + m_z * other.m_a.m_z + m_w * other.m_a.m_w,
//		m_x * other.m_b.m_x + m_y * other.m_b.m_y + m_z * other.m_b.m_z + m_w * other.m_b.m_w,
//		m_x * other.m_c.m_x + m_y * other.m_c.m_y + m_z * other.m_c.m_z + m_w * other.m_c.m_w,
//		m_x * other.m_d.m_x + m_y * other.m_d.m_y + m_z * other.m_d.m_z + m_w * other.m_d.m_w);
//}

Vector4 Vector4::operator*(float m)
{
	return Vector4(m_x * m, m_y * m, m_z * m, m_w * m);
}

Vector4 Vector4::operator/(float d)
{
	return Vector4(m_x / d, m_y / d, m_z / d, m_w / d);
}