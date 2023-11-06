#include "Circle.h"
#define _USE_MATH_DEFINES
#include "math.h"

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::Size()
{
	area = radius * radius * 3.14f;
}

void Circle::Draw()
{
	printf("面積は%f\n", area);
}
