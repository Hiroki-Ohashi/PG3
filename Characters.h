#pragma once
#include "Movement.h"

class Characters : public Movement {
public:

	Characters();
	~Characters();

	void Draw() override;

};
