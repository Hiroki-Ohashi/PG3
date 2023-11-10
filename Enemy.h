#pragma once
#include <stdio.h>
#include <windows.h>

class Enemy {
public:
	void Update();

	// 近接
	void Atack();
	// 射撃
	void Fire();
	// 離脱
	void Leave();

private:
	static void (Enemy::* phasePFunc[])();

};