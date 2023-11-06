#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	area = width * height;
}

void Rectangle::Draw()
{
	printf("面積は%f\n", area);
}
