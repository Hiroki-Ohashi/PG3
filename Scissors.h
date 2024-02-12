#pragma once
#include "Tool.h"

class Scissors : public Tool {
public:

	Scissors();
	~Scissors();

	void Cut() override;

};
