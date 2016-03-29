#pragma once
#define _USE_MATH_DEFINES
#include "graphics.h"
#include "Vector2D.h"
#include "Rectangle.h"
#include <math.h>
class Line {
public:
	RGB color;
	Vector2D p1, p2;
	Vector2D dirVec, norVec;
	Rectangle collideBox;
	float length, width = 2.0f;

	Line();
	Line(const Line &l);
	Line(Vector2D p1, Vector2D p2, RGB color);
	
	void update();
	float distance(Vector2D p);

};