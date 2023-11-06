#include <stdio.h>
#include "IShape.h"
#include "Circle.h"

int main() {
	IShape* iShape;

	iShape = new Circle();

	iShape->Size();
	iShape->Draw();

	delete iShape;
	

	return 0;
}