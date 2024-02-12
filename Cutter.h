#pragma once
#include "Cutting.h"

class Cutter : public Cutting {
public:

	Cutter();
	~Cutter();

	void Cut() override;

};
