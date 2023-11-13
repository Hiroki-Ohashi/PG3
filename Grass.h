#pragma once
#include "Movement.h"

class Grass : public Movement {
public:

	Grass();
	~Grass();

	void Grow() override;

};
