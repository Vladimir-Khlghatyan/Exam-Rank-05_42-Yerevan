#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		Fwoosh	*clone() const;
};
