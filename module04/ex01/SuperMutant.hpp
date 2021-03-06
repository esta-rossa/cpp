#pragma once

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const &other);
	SuperMutant &operator=(SuperMutant const &other);

	void takeDamage(int amount);
};
