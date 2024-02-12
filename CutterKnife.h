#pragma once
#include "Tool.h"

class CutterKnife : public Tool {
public:

	CutterKnife();
	~CutterKnife();

	void Cut() override;

};
