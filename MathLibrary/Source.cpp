#include <Windows.h>
#include "Math.h"

void main()
{
	Vector2 test1 = { 3, 4 };
	test1 = test1 * 2;
	test1.Print();

	Vector2 test2 = { 5, 6 };
	test2.Normalise();
	test2.Print();

	Vector3 a = { 3, 5, 1 };
	Vector3 b = { 6, 2, 5 };
	Vector3 test3 = a.CrossProduct(b);
	test3.Print();

	Vector4 c = { 4, 6, 8, 24 };
	Vector4 d = { 35, 3, 5, 2 };
	std::cout << c.DotProduct(d) << std::endl;

	system("pause");
}