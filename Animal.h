#pragma once
#include "Movement.h"

class Animal : public Movement {
public:

	Animal();
	~Animal();

	void Move() override;

};
