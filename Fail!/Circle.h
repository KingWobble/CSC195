#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(float r);
	~Circle();
	float Area() const override;
	void SetRadius(float radius);
	float GetRadius() const;

private:
	float m_radius;

};

#endif