#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{

private:
    std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const &copy);
    Warlock &operator=(Warlock const &copy);

    SpellBook spellbook;

public:
    ~Warlock();
    Warlock(std::string const &name, std::string const &title);
    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const &title);
    void introduce() const;

    void learnSpell(ASpell *aspell);
    void forgetSpell(std::string spellname);
    void launchSpell(std::string spellname, ATarget const &atarget);


};