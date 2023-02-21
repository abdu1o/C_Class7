#include <iostream>
#include "Class.h"
using namespace std;

int Area::count = 0;

int main()
{
	Area figure(2, 5, 10);

	cout << figure.EquilateralTriangleArea() << endl;
	cout << figure.RightTriangleArea() << endl;
	cout << figure.RectangleArea() << endl;
	cout << figure.SquareArea() << endl;
	cout << figure.RhombArea() << endl << endl;

	cout << "Number of figures: ";
	cout << Area::ReturnCount();
}
