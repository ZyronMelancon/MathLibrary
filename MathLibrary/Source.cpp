#include <Windows.h>
#include "Math.h"
 
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

#include <iostream>

void main()
{
	std::cout << "2D vector multiplied by a scalar (2): " << std::endl;
	Vector2 test1 = { 3, 4 };
	std::cout << "Original: ";
	//test1.print();
	printf("{%f, %f}\n", test1.m_x, test1.m_y);
	std::cout << "Multiplied: ";
	test1 = test1 * 2;
	printf("{%f, %f}\n", test1.m_x, test1.m_y);
	
	
	
	std::cout << "Normalising a 2D vector: " << std::endl;
	Vector2 test2 = { 5, 6 };
	std::cout << "Original: ";
	printf("{%f, %f}\n", test2.m_x, test2.m_y);
	test2.normalise();
	std::cout << "Normalised: ";
	printf("{%f, %f}\n", test2.m_x, test2.m_y);
	printf("\n");

	std::cout << "Cross Product function: " << std::endl;
	Vector3 a = { 3, 5, 1 };
	Vector3 b = { 6, 2, 5 };
	std::cout << "The two 3D vectors are:" << std::endl;
	printf("{%f, %f, %f}\n", a.m_x, a.m_y, a.m_z);
	printf("{%f, %f, %f}\n", b.m_x, b.m_y, b.m_z);
	std::cout << "Here is the Cross Product: ";
	Vector3 test3 = a.cross(b);
	printf("{%f, %f, %f}\n", test3.m_x, test3.m_y, test3.m_z);
	printf("\n");

	std::cout << "Dot Product function: " << std::endl;
	Vector4 c = { 4, 6, 8, 24 };
	Vector4 d = { 35, 3, 5, 2 };
	std::cout << "The two 4D vectors are: " << std::endl;
	printf("{%f, %f, %f, %f}\n", c.m_x, c.m_y, c.m_z, c.m_w);
	printf("{%f, %f, %f, %f}\n", d.m_x, d.m_y, d.m_z, d.m_w);
	std::cout << "The Dot Product is: ";
	std::cout << c.dot(d) << std::endl;
	printf("\n");

	std::cout << "This next test checks for functionality with the multiply operator overide for Matrices." << std::endl;
	std::cout << "Both matrices are: " << std::endl;
	Vector3 ma = { 1, 2, 3 };
	Matrix3 test4 = { ma, ma, ma };
	Matrix3 test5 = { ma, ma, ma };
	printf("{%f, %f, %f}\n", test4.m_a.m_x, test4.m_a.m_y, test4.m_a.m_z);
	printf("{%f, %f, %f}\n", test4.m_b.m_x, test4.m_b.m_y, test4.m_b.m_z);
	printf("{%f, %f, %f}\n", test4.m_c.m_x, test4.m_c.m_y, test4.m_c.m_z);
	printf("\n");
	printf("{%f, %f, %f}\n", test5.m_a.m_x, test5.m_a.m_y, test5.m_a.m_z);
	printf("{%f, %f, %f}\n", test5.m_b.m_x, test5.m_b.m_y, test5.m_b.m_z);
	printf("{%f, %f, %f}\n", test5.m_c.m_x, test5.m_c.m_y, test5.m_c.m_z);
	Matrix3 test6 = test4 * test5;
	std::cout << "Here is the product matrix:" << std::endl;
	printf("{%f, %f, %f}\n", test6.m_a.m_x, test6.m_a.m_y, test6.m_a.m_z);
	printf("{%f, %f, %f}\n", test6.m_b.m_x, test6.m_b.m_y, test6.m_b.m_z);
	printf("{%f, %f, %f}\n", test6.m_c.m_x, test6.m_c.m_y, test6.m_c.m_z); 
	printf("\n");

	Matrix3 test7 = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
	std::cout << "This test checks functionality of the setRotateZ function." << std::endl;
	std::cout << "The original matrix is: " << std::endl;
	printf("{%f, %f, %f}\n", test7.m_a.m_x, test7.m_a.m_y, test7.m_a.m_z);
	printf("{%f, %f, %f}\n", test7.m_b.m_x, test7.m_b.m_y, test7.m_b.m_z);
	printf("{%f, %f, %f}\n", test7.m_c.m_x, test7.m_c.m_y, test7.m_c.m_z);
	std::cout << "The rotated matrix is: " << std::endl;
	test7.setRotateZ(0.785f);
	printf("{%f, %f, %f}\n", test7.m_a.m_x, test7.m_a.m_y, test7.m_a.m_z);
	printf("{%f, %f, %f}\n", test7.m_b.m_x, test7.m_b.m_y, test7.m_b.m_z);
	printf("{%f, %f, %f}\n", test7.m_c.m_x, test7.m_c.m_y, test7.m_c.m_z);
	/* I expect a result of
	//0.707 -0.707 0
	//0.707  0.707 0
	//0	   0	 1 */

	system("pause");
}