#include <Windows.h>
#include "Math.h"

void main()
{
	std::cout << "2D vector multiplied by a scalar (2): " << std::endl;
	Vector2 test1 = { 3, 4 };
	std::cout << "Original: ";
	test1.print();
	std::cout << "Multiplied: ";
	test1 = test1 * 2;
	test1.print();
	printf("\n");

	std::cout << "Normalising a 2D vector: " << std::endl;
	Vector2 test2 = { 5, 6 };
	std::cout << "Original: ";
	test2.print();
	test2.normalise();
	std::cout << "Normalised: ";
	test2.print();
	printf("\n");

	std::cout << "Cross Product function: " << std::endl;
	Vector3 a = { 3, 5, 1 };
	Vector3 b = { 6, 2, 5 };
	std::cout << "The two 3D vectors are:" << std::endl;
	a.print();
	b.print();
	std::cout << "Here is the Cross Product: ";
	Vector3 test3 = a.cross(b);
	test3.print();
	printf("\n");

	std::cout << "Dot Product function: " << std::endl;
	Vector4 c = { 4, 6, 8, 24 };
	Vector4 d = { 35, 3, 5, 2 };
	std::cout << "The two 4D vectors are: " << std::endl;
	c.print();
	d.print();
	std::cout << "The Dot Product is: ";
	std::cout << c.dot(d) << std::endl;
	printf("\n");

	std::cout << "This next test checks for functionality with the multiply operator overide for Matrices." << std::endl;
	std::cout << "Both matrices are: " << std::endl;
	Vector3 ma = { 1, 2, 3 };
	Matrix3 test4 = { ma, ma, ma };
	Matrix3 test5 = { ma, ma, ma };

	test4.Print();

	Matrix3 test6 = test4 * test5;

	std::cout << "Here is the product matrix:" << std::endl;

	test6.Print();  


	system("pause");
}