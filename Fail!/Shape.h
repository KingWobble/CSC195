#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	Shape() {}
	virtual ~Shape() {}
	virtual float Area() const = 0;

};
#endif 