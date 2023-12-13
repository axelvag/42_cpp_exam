#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{

private:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    ASpell(ASpell const &copy);
    ASpell &operator=(ASpell const &copy);
    std::string const &getName() const;
    std::string const &getEffects() const;

    void launch(ATarget const &atarget) const;
    virtual ASpell *clone() const = 0;

};