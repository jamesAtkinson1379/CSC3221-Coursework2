#include "stdafx.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
#include <time.h> 
#include <vector>

using namespace std;

float randNum(int limit);
float randNumMove(float limit);

int main()
{
	int NUMBER_OF_SHAPES = 5;
	int GRID_SIZE = 200;
	int MAX_SHAPE_SIZE = 15;
	int currentSize = NUMBER_OF_SHAPES;
	srand(time(NULL));

	Square *shapes = new Square[NUMBER_OF_SHAPES];
	vector<Square> shapesV(NUMBER_OF_SHAPES);

	for (int i = 0; i < NUMBER_OF_SHAPES; i++) {
		shapesV[i] = Square(randNum(GRID_SIZE),randNum(GRID_SIZE),randNum(MAX_SHAPE_SIZE));
	}
	while (shapesV.size() > 1) {

		for (int i = 0; i < shapesV.size(); i++) {
			cout << i <<"x coord is : " << shapesV[i].getX() << " y coord is : " << shapesV[i].getY() << endl;
		}

		for (int i = 0;i < shapesV.size(); i++) {
			shapesV[i].moveShape(randNumMove(5), randNumMove(5));
			for (int j = 0; j < shapesV.size(); j++) {
				if (i != j) {
					if (shapesV[i].detectCollision(shapesV[j])) {
							shapesV.erase(shapesV.begin()+i);
							if (i < j) {
								shapesV.erase(shapesV.begin() + (j - 1));
							}
							else {
								shapesV.erase(shapesV.begin() + (j));
							}
							
					}
				}
			}
		}

		for (int i = 0; i < shapesV.size(); i++) {
			cout << i << "x coord is : " << shapesV[i].getX() << " y coord is : " << shapesV[i].getY() << endl;
		}
	}
	int x;
	cin >> x;

	return 0;
}

float randNum(int limit) {
	return (rand() % limit);
}
float randNumMove(float limit) {
	return -limit + (rand()) / ((RAND_MAX / (limit - -limit)));
}

//Square a = Square(1,1, 1);
//Circle b = Circle(3, 3, 1.45);
//Square c = Square(4.0, 4.0, 2);
//Circle d = Circle(3, 3, 1);

//cout << "x : " << a.getX() << " y : " << a.getY() << endl;
//cout << "x : " << b.getX() << " y : " << b.getY() << endl;

//a.detectCollision(b);
//b.detectCollision(a);
//a.detectCollision(c);
//b.detectCollision(a);
//b.detectCollision(d);

//cout << "x : " << a.getX() << " y : " << a.getY() << endl;
//cout << "x : " << b.getX() << " y : " << b.getY() << endl;
//cout << "Random number :" << randNum(100) << endl;