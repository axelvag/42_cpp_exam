#pragma once

#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{

private:
    std::string type;

public:
    ATarget();
    ATarget(std::string const &type);
    virtual ~ATarget();
    ATarget(ATarget const &copy);
    ATarget &operator=(ATarget const &copy);
    std::string const &getType() const;

    void getHitBySpell(ASpell const &aspell) const;
    virtual ATarget *clone() const = 0;

};