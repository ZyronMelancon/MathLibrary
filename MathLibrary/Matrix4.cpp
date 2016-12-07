#include "Matrix4.h"
#include "Vector4.h"
#include <iostream>

Matrix4::Matrix4(Vector4 a, Vector4 b, Vector4 c, Vector4 d)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
}

Matrix4::Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
	m_a = { a, b, c, d };
	m_b = { e, f, g, h };
	m_c = { i, j, k, l };
	m_d = { m, n, o, p };
}

Matrix4 Matrix4::operator*(Matrix4 o)
{
	Vector4 newA = { m_a.m_x * o.m_a.m_x + m_a.m_y * o.m_b.m_x + m_a.m_z * o.m_c.m_x + m_a.m_w * o.m_d.m_x,
		m_a.m_x * o.m_a.m_y + m_a.m_y * o.m_b.m_y + m_a.m_z * o.m_c.m_y + m_a.m_w * o.m_d.m_y,
		m_a.m_x * o.m_a.m_z + m_a.m_y * o.m_b.m_z + m_a.m_z * o.m_c.m_z + m_a.m_w * o.m_d.m_z,
		m_a.m_x * o.m_a.m_w + m_a.m_y * o.m_b.m_w + m_a.m_z * o.m_c.m_w + m_a.m_w * o.m_d.m_w };
	Vector4 newB = { m_b.m_x * o.m_a.m_x + m_b.m_y * o.m_b.m_x + m_b.m_z * o.m_c.m_x + m_b.m_w * o.m_d.m_x,
		m_b.m_x * o.m_a.m_y + m_b.m_y * o.m_b.m_y + m_b.m_z * o.m_c.m_y + m_b.m_w * o.m_d.m_y,
		m_b.m_x * o.m_a.m_z + m_b.m_y * o.m_b.m_z + m_b.m_z * o.m_c.m_z + m_b.m_w * o.m_d.m_z,
		m_b.m_x * o.m_a.m_w + m_b.m_y * o.m_b.m_w + m_b.m_z * o.m_c.m_w + m_b.m_w * o.m_d.m_w };
	Vector4 newC = { m_c.m_x * o.m_a.m_x + m_c.m_y * o.m_b.m_x + m_c.m_z * o.m_c.m_x + m_c.m_w * o.m_d.m_x,
		m_c.m_x * o.m_a.m_y + m_c.m_y * o.m_b.m_y + m_c.m_z * o.m_c.m_y + m_c.m_w * o.m_d.m_y,
		m_c.m_x * o.m_a.m_z + m_c.m_y * o.m_b.m_z + m_c.m_z * o.m_c.m_z + m_c.m_w * o.m_d.m_z,
		m_c.m_x * o.m_a.m_w + m_c.m_y * o.m_b.m_w + m_c.m_z * o.m_c.m_w + m_c.m_w * o.m_d.m_w };
	Vector4 newD = { m_d.m_x * o.m_a.m_x + m_d.m_y * o.m_b.m_x + m_d.m_z * o.m_c.m_x + m_d.m_w * o.m_d.m_x,
		m_d.m_x * o.m_a.m_y + m_d.m_y * o.m_b.m_y + m_d.m_z * o.m_c.m_y + m_d.m_w * o.m_d.m_y,
		m_d.m_x * o.m_a.m_z + m_d.m_y * o.m_b.m_z + m_d.m_z * o.m_c.m_z + m_d.m_w * o.m_d.m_z,
		m_d.m_x * o.m_a.m_w + m_d.m_y * o.m_b.m_w + m_d.m_z * o.m_c.m_w + m_d.m_w * o.m_d.m_w };
	return Matrix4(newA, newB, newC, newD);
}

void Matrix4::setRotateX(float r)
{
	m_b.m_y = cos(r);
	m_b.m_z = -sin(r);
	m_c.m_y = sin(r);
	m_c.m_z = cos(r);
}

void Matrix4::setRotateY(float r)
{
	m_a.m_x = cos(r);
	m_a.m_z = sin(r);
	m_c.m_x = -sin(r);
	m_c.m_z = cos(r);
}

void Matrix4::setRotateZ(float r)
{
	m_a.m_x = cos(r);
	m_a.m_y = -sin(r);
	m_b.m_x = sin(r);
	m_b.m_y = cos(r);
}
