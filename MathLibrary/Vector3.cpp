#include "Vector3.h"
#include "Matrix3.h"
#include <math.h>
#include <iostream>

Vector3::Vector3()
{
	m_x = 0;
	m_y = 0;
	m_z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

float Vector3::dot(Vector3 other)
{
	return m_x * other.m_x + m_y * other.m_y + m_z * other.m_z;
}

Vector3 Vector3::cross(Vector3 other)
{
	return Vector3(m_y * other.m_z - m_z * other.m_y,
		m_x * other.m_z - m_z * other.m_x,
		m_x * other.m_y - m_y * other.m_x);
}

float Vector3::magnitude()
{
	return sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
}

void Vector3::normalise()
{
	m_x = m_x / Vector3::magnitude();
	m_y = m_y / Vector3::magnitude();
	m_z = m_z / Vector3::magnitude();
}

//void Vector3::print()
//{
//	std::cout << m_x << ", " << m_y << ", " << m_z << std::endl;
//}

Vector3 Vector3::operator+(Vector3 other)
{
	return Vector3(m_x + other.m_x, m_y + other.m_y, m_z + other.m_z);
}

Vector3 Vector3::operator-(Vector3 other)
{
	return Vector3(m_x - other.m_x, m_y - other.m_y, m_z - other.m_z);
}

//Vector3 Vector3::operator*(Matrix3 other)
//{
//	return Vector3(m_x * other.m_a.m_x + m_y * other.m_a.m_y + m_z * other.m_a.m_z,
//		m_x * other.m_b.m_x + m_y * other.m_b.m_y + m_z * other.m_b.m_z,
//		m_x * other.m_c.m_x + m_y * other.m_c.m_y + m_z * other.m_c.m_z);
//}

Vector3 Vector3::operator*(float m)
{
	return Vector3(m_x * m, m_y * m, m_z * m);
}

Vector3 Vector3::operator/(float d)
{
	return Vector3(m_x / d, m_y / d, m_z / d);
}