#include "Math.h"

Vector::Vector(float xin, float yin)
{
	m_x = xin;
	m_y = yin;
	m_z = 0;
	m_w = 0;
}

Vector::Vector(float xin, float yin, float zin)
{
	m_x = xin;
	m_y = yin;
	m_z = zin;
	m_w = 0;
}

Vector::Vector(float xin, float yin, float zin, float win)
{
	m_x = xin;
	m_y = yin;
	m_z = zin;
	m_w = win;
}

Matrix::Matrix(Vector a, Vector b)
{
	m_a = a;
	m_b = b;
}

Matrix::Matrix(Vector a, Vector b, Vector c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}

Matrix::Matrix(Vector a, Vector b, Vector c, Vector d)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
}
