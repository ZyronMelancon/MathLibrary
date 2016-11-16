#include "Math.h"

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

float Vector2::DotProduct(Vector2 other)
{
	return m_x * other.m_x + m_y * other.m_y;
}

float Vector2::Magnitude()
{
	return sqrt((m_x*m_x) + (m_y*m_y));
}

void Vector2::Normalise()
{
	if (m_x > m_y) //Checks which axis has the highest value
	{
		m_y = m_y / m_x;
		m_x = 1;
	}
	else
	{
		m_x = m_x / m_y;
		m_y = 1;
	}
}

void Vector2::Print()
{
	std::cout << m_x << ", " << m_y << std::endl;
}

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

float Vector3::DotProduct(Vector3 other)
{
	return m_x * other.m_x + m_y * other.m_y + m_z * other.m_z;
}

Vector3 Vector3::CrossProduct(Vector3 other)
{
	return Vector3(m_y * other.m_z - m_z * other.m_y, m_x * other.m_z - m_z * other.m_x, m_x * other.m_y - m_y * other.m_x);
}

float Vector3::Magnitude()
{
	return sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
}

void Vector3::Normalise()
{
	if (m_x >= m_y && m_x >= m_z)
	{
		m_z = m_z / m_x;
		m_y = m_y / m_x;
		m_x = 1;
	}
	else if (m_y >= m_x && m_y >= m_z)
	{
		m_z = m_z / m_y;
		m_x = m_x / m_y;
		m_y = 1;
	}
	else if (m_z >= m_x && m_z >= m_y)
	{
		m_y = m_y / m_z;
		m_x = m_x / m_z;
		m_z = 1;
	}
}

void Vector3::Print()
{
	std::cout << m_x << ", " << m_y << ", " << m_z << std::endl;
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

float Vector4::DotProduct(Vector4 other)
{
	return m_x*other.m_x + m_y*other.m_y + m_z*other.m_z + m_w*other.m_w;
}

Vector4 Vector4::CrossProduct(Vector4 other)
{
	return Vector4();
}

float Vector4::Magnitude()
{
	return sqrt(m_x*m_x + m_y*m_y + m_z*m_z + m_w*m_w);
}

void Vector4::Normalise()
{
	if (m_x >= m_y && m_x >= m_z && m_x >= m_w)
	{
		m_w = m_w / m_x;
		m_z = m_z / m_x;
		m_y = m_y / m_x;
		m_x = 1;
	}
	else if (m_y >= m_x && m_y >= m_z && m_x >= m_w)
	{
		m_w = m_w / m_y;
		m_z = m_z / m_y;
		m_x = m_x / m_y;
		m_y = 1;
	}
	else if (m_z >= m_x && m_z >= m_y && m_x >= m_w)
	{
		m_w = m_w / m_z;
		m_y = m_y / m_z;
		m_x = m_x / m_z;
		m_z = 1;
	}
	else if (m_w >= m_x && m_w >= m_y && m_w >= m_z)
	{
		m_z = m_z / m_w;
		m_y = m_y / m_w;
		m_x = m_x / m_w;
		m_w = 1;
	}
}

void Vector4::Print()
{
	std::cout << m_x << ", " << m_y << ", " << m_z << ", " << m_w << std::endl;
}

Matrix3::Matrix3(Vector3 a, Vector3 b, Vector3 c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}
