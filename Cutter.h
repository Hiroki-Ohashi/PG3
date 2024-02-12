#pragma once
#include "Tool.h"

class Cutter : public Tool {
public:

	Cutter();
	~Cutter();

	void Cut() override;

};
