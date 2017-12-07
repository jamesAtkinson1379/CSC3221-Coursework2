#pragma once
class Shape
{
public:
	Shape();
	Shape(float x, float y,float size);
	Shape(const Shape &vector);
	Shape& operator=(const Shape &vector);
	const float getX();
	const float getY();
	const float getSize();
	void setX(float x);
	void setY(float y);
	void setSize(float size);
	void moveShape(float dy, float dx);
	virtual bool detectCollision(Shape rhs);
	void ifCollision(Shape rhs);
	~Shape();
protected:
	float size;
	float x;
	float y;
};

