#include "Rectangle.h"

Rectangle::Rectangle(float w, float h) : m_witdh(w), m_height(h) {}

Rectangle::~Rectangle() {}

float Rectangle::Area() const {
	return m_witdh * m_height;
}