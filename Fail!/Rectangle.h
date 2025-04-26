#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(float w, float h);
	~Rectangle();
	float Area() const override;

private:
	float m_witdh;
	float m_height;
};

#endif