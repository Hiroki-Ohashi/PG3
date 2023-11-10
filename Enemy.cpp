#include "Enemy.h"

void Enemy::Update()
{
	(this->*phasePFunc[0])();
	Sleep(1000);

	(this->*phasePFunc[1])();
	Sleep(1000);

	(this->*phasePFunc[2])();
	Sleep(1000);
}

void (Enemy::* Enemy::phasePFunc[])() = {
	&Enemy::Atack,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Atack()
{
	printf("敵が現れた\n");
	printf("敵の近接攻撃\n");
}

void Enemy::Fire()
{
	printf("敵の射撃攻撃\n");
}

void Enemy::Leave()
{
	printf("敵が撤退\n");
}
