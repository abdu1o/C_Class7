#pragma once
using namespace std;

class Area
{
private:
	int side1;
	int side2;
	int h;

	static int count;

public:

	static int ReturnCount()
	{
		return count;
	}

	Area(int _side1, int _side2, int _h)
	{
		this->side1 = _side1;
		this->side2 = _side2;
		this->h = _h;
	}

	double EquilateralTriangleArea()
	{
		count++;
		cout << "Equilateral Triangle area: ";
		return side1 / 2 * h;
	}

	double RightTriangleArea()
	{
		count++;
		cout << "Right Triangle area: ";
		return side1 * side2 / 2;
	}

	double RectangleArea()
	{
		count++;
		cout << "Rectangle area: ";
		return side1 * side2;
	}

	double SquareArea()
	{
		count++;
		cout << "Square area: ";
		return side1 * side1;
	}

	double RhombArea()
	{
		count++;
		cout << "Rhombus area: ";
		return side1 * h;
	}
};