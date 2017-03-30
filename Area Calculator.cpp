// Area Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


void main()
{
	int choice = 0;
	double area = 0.0;
	double pi = 3.141592;

	printf("Area Calculator \n");
	printf("Enter Choice: \n1 (Triangle) \n2 (Square) \n3 (Rectangle) \n4 (Parallelogram) \n5 (Trapezoid) \n6 (Circle) \n7 (Ellipse) \n8 (Sector) \n");
	printf("Choice: ");
	scanf_s("%d", &choice);

	if (choice == 1)
	{
		double base = 0.0;
		double height = 0.0;

		printf("Enter Base Width: ");
		scanf_s("%lf", &base);
		if (base <= 0);
		{
			while (base <= 0)
			{
				printf("Base Length Must be a Positive Real Number. \nPlease Enter Base Width again: ");
				scanf_s("%lf", &base);
			}

		}

		printf("Enter Verticle Height: ");
		scanf_s("%lf", &height);
		if (height <= 0)
		{
			while (height <= 0)
			{
				printf("Height Must be a Positive Real Number. \nPlease Enter Height again: ");
				scanf_s("%lf", &height);
			}
		}

		area = ((0.5) * base * height);
	
	}

	else if (choice == 2)
	{
		double side = 0.0;

		printf("Enter Lenth of Side: ");
		scanf_s("%lf", &side);
		if (side <= 0)
		{
			while (side <= 0)
			{
				printf("Length of Side Must be a Positive Real Number. \nPlease Enter Length of Side again: ");
				scanf_s("%lf", &side);
			}
		}

		area = (side * side);

		
	}

	else if (choice == 3)
	{
		double width = 0.0;
		double height = 0.0;

		printf("Enter width: ");
		scanf_s("%lf", &width);
		if (width <= 0)
		{
			while (width <= 0)
			{
				printf("The Width Must be a Positive Real Number. \nPlease Enter the Width again: ");
				scanf_s("%lf", &width);
			}
		}

		printf("Enter Height: ");
		scanf_s("%lf", &height);
		if (height <= 0)
		{
			while (height <= 0)
			{
				printf("The Height Must be a Positive Real Number. \nPlease Enter the Height again: ");
				scanf_s("%lf", &height);
			}
		}


		area = (width)* (height);

	}

	else if (choice == 4)
	{
		double base = 0.0;
		double height = 0.0;

		printf("Enter Length of Base: ");
		scanf_s("%lf", &base);
		if (base <= 0)
		{
			while (base <= 0)
			{
				printf("Length of Base Must be a Positive Real Number. \nPlease Enter Length of Base again: ");
				scanf_s("%lf", &base);
			}
		}

		printf("Enter Verticle Height: ");
		scanf_s("%lf", &height);
		if (height <= 0)
		{
			while (height <= 0)
			{
				printf("The Height Must be a Positive Real Number. \nPlease Enter the Height again: ");
				scanf_s("%lf", &height);
			}
		}

		area = (base * height);

	}

	else if (choice == 5)
	{
		double topWidth = 0.0;
		double baseWidth = 0.0;
		double height = 0.0;

		printf("Enter Base Width: ");
		scanf_s("%lf", &baseWidth);
		if (baseWidth <= 0)
		{
			while (baseWidth <= 0)
			{
				printf("The Base Width Must be a Positive Real Number. \nPlease Enter the Base Width again: ");
				scanf_s("%lf", &baseWidth);
			}
		}

		printf("Enter Top Width: ");
		scanf_s("%lf", &topWidth);
		if (topWidth <= 0)
		{
			while (topWidth <= 0)
			{
				printf("The Top Width Must be a Positive Real Number. \nPlease Enter The Top Width again: ");
				scanf_s("%lf", &topWidth);
			}
		}

		printf("Enter Height: ");
		scanf_s("%lf", &height);
		if (height <= 0)
		{
			while (height <= 0)
			{
				printf("The Height Must be a Positive Real Number. \nPlease Enter the Height again: ");
				scanf_s("%lf", &height);
			}
		}

		area = ((0.5*(topWidth + baseWidth) * height));

	}

	else if (choice == 6)
	{
		double radius = 0.0;

		printf("Enter The Radius: ");
		scanf_s("%lf", &radius);
		if (radius <= 0)
		{
			while (radius <= 0)
			{
				printf("The Radius Must be a Positive Real Number. \nPlease Enter the Radius again: ");
				scanf_s("%lf", &radius);
			}
		}

		area = ((pi)*(radius*radius));

	}

	else if (choice == 7)
	{
		double minorAxis = 0.0;
		double majorAxis = 0.0;

		printf("Enter Length of Minor Axis: ");
		scanf_s("%lf", &minorAxis);
		if (minorAxis <= 0)
		{
			while (minorAxis <= 0)
			{
				printf("The Minor Axis Must be a Positive Real Number. \nPlease Enter the Minor Axis again: ");
				scanf_s("%lf", &minorAxis);
			}
		}
		printf("Enter Length of Major Axis: ");
		scanf_s("%lf", &majorAxis);
		if (majorAxis <= 0)
		{
			while (majorAxis <= 0)
			{
				printf("The Major Axis Must be a Positive Real Number. \nPlease Enter the Major Axis again: ");
				scanf_s("%lf", &majorAxis);
			}
		}

		area = ((pi)*(majorAxis)*(minorAxis));

	}

	else if (choice == 8)
	{
		double radius = 0.0;
		double radians = 0.0;

		printf("Enter the Radius:");
		scanf_s("%lf", &radius);
		if (radius <= 0)
		{
			while (radius <= 0)
			{
				printf("The Radius Must be a Positive Real Number. \nPlease Enter the Radius again: ");
				scanf_s("%lf", &radius);
			}
		}
		printf("Enter the Angle in Radians:");
		scanf_s("%lf", &radians);
		if (radians <= 0)
		{
			while (radians <= 0)
			{
				printf("The Angle In Radians Must be a Positive Real Number. \nPlease Enter the Angle again: ");
				scanf_s("%lf", &radians);
			}
		}

		area = ((0.5)*(radius*radius)*(radians));

	}

	printf("Area = %.2lf\n", area);

}