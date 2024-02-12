#pragma once
#include "Cutting.h"

class Scissors : public Cutting {
public:

	Scissors();
	~Scissors();

	void Cut() override;

};
