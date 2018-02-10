// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

int main()
{

	const double kPi = 3.1416;
	int choice{};
	cout << "Enter the Choice of Tringle: 0-AAA 1-AAS 2-ASA 3-SAS 4-SSA 5-SSS";
	cin >> choice;
	switch (choice)
	{

	case 0://AAA
	{
		cout << "AAA triangles are impossible to solve further since there is nothing to show us size... we know the shape but not how big it is." << endl;
	}

	case 1://AAS
	{
		double A, B, C, a, b, c;

		cout << "Enter Angle of 'A'";
		cin >> A;


		cout << "Enter Angle of 'C'";
		cin >> C;

		cout << "Enter and Side of 'c'";
		cin >> c;

		B = (180 - A - C);
		A = A *kPi / 180.00;
		C = C *kPi / 180.00;

		a = (c*sin(A)) / sin(C);
		b = (c*sin(B)) / sin(C);

		cout << fixed << std::setprecision(2);

		std::cout << "The angle of B is:" << B;
		std::cout << "The side of a is:" << a;
		std::cout << "The side of b is:" << b;
	}

	case 2://ASA
	{
		double A, B, C, a, b, c;

		cout << "Enter Angle of 'A'";
		cin >> A;


		cout << "Enter Angle of 'B'";
		cin >> B;

		cout << "Enter and Side of 'c'";
		cin >> c;

		C = (180 - A - B);
		A = A *kPi / 180.00;
		B = B *kPi / 180.00;

		a = (c / sin(C)) * sin(A);
		b = (c / sin(C)) * sin(B);

		cout << fixed << std::setprecision(2);

		std::cout << "The angle of C is:" << C;
		std::cout << "The side of a is:" << a;
		std::cout << "The side of b is:" << b;
	}

	case 3://SAS
	{
		double A, B, C, a, b, c;

		cout << "Enter Angle of 'A'";
		cin >> A;


		cout << "Enter side of 'b'";
		cin >> b;

		cout << "Enter and Side of 'c'";
		cin >> c;

		a = sqrt(b*b + c*c - 2 * b*c * cos(A));

		B = (sin(A) * b) / a;

		C = (180 - A - B);
		A = A * 180.00 / kPi;
		B = B * 180.00 / kPi;

		cout << fixed << std::setprecision(2);

		std::cout << "The side of a is:" << a;
		std::cout << "The angle of B is:" << B;
		std::cout << "The angle of C is:" << C;
	}

	case 4://SSA
	{
		const double kPi = 3.14;
		double A, B, C, a, b, c;

		cout << "Enter Angle of 'B'";
		cin >> B;


		cout << "Enter side of 'b'";
		cin >> b;

		cout << "Enter and Side of 'c'";
		cin >> c;

		C = (sin(c) * sin(B)) / 8;

		A = (180 - c - C);
		c = c * 180.00 / kPi;
		C = C * 180.00 / kPi;

		a = (sin(A) * b) / sin(B);

		cout << fixed << std::setprecision(2);

		std::cout << "The angle of C is:" << C;
		std::cout << "The angle of A is:" << A;
		std::cout << "The side of a is:" << a;

	}

	case 5://SSS
	{
		double A, B, C, a, b, c;

		cout << "Enter Side of 'a'";
		cin >> a;


		cout << "Enter side of 'b'";
		cin >> b;

		cout << "Enter and Side of 'c'";
		cin >> c;

		A = ((b*b) + (c*c) - (a*a)) / 2 * b*c;

		B = ((c*c) + (a*a) - (b*b)) / 2 * c*a;


		C = (180 - A - B);
		A = A * 180.00 / kPi;
		B = B * 180.00 / kPi;

		cout << fixed << std::setprecision(2);

		std::cout << "The angle of A is:" << A;
		std::cout << "The angle of B is:" << B;
		std::cout << "The angle of C is:" << C;
	}


	return 0;
	}

}