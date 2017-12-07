#include "stdafx.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>

using namespace std;

int main()
{
	int NUMBER_OF_SHAPES = 2;

	Square *shapes = new Square[NUMBER_OF_SHAPES];

	Square a = Square(1, 1, 1);
	Circle b = Circle(1, 1, 1);
	Square c = Square(2, 2, 2);
	Circle d = Circle(3, 3, 1);

	cout << "x : " << a.getX() << " y : " << a.getY() << endl;
	cout << "x : " << b.getX() << " y : " << b.getY() << endl;

	//a.detectCollision(a);
	//a.detectCollision(a);
	//b.detectCollision(a);
	b.detectCollision(d);

	cout << "x : " << a.getX() << " y : " << a.getY() << endl;
	cout << "x : " << b.getX() << " y : " << b.getY() << endl;

	for (int i = 0; i < NUMBER_OF_SHAPES; i++) {
		shapes[i] = Square(i,i,i);
	}
	for (int i = 0; i < NUMBER_OF_SHAPES; i++) {
		cout << "x coord is : " << shapes[i].getX() << " y coord is : " << shapes[i].getY() << endl;
	}
	for (int i = 0;i < NUMBER_OF_SHAPES; i++) {
		shapes[i].moveShape(1, 1);
	}
	for (int i = 0; i < NUMBER_OF_SHAPES; i++) {
		cout << "x coord is : " << shapes[i].getX() << " y coord is : " << shapes[i].getY() << endl;
	}
	int x;
	cin >> x;

	return 0;
}