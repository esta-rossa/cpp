#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
protected:
	Peon();
public:
	Peon(std::string name);
	Peon(Peon const & other);
	Peon &operator=(Peon const &other);
	virtual ~Peon();
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &other);
