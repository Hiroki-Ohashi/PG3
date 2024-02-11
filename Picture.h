#pragma once
#include "Movement.h"

class Picture : public Movement {
public:

	Picture();
	~Picture();

	void Draw() override;

};
