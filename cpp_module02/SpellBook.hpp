#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"

class SpellBook
{

private:
    SpellBook(SpellBook const &copy);
    SpellBook &operator=(SpellBook const &copy);

    std::map<std::string, ASpell *> arr2;

public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

};