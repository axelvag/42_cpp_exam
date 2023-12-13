#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}


void SpellBook::learnSpell(ASpell* aspell)
{
    if (aspell)
        arr2[aspell->getName()] = aspell->clone();
}

void SpellBook::forgetSpell(std::string const &spellname)
{
    if (arr2.find(spellname) != arr2.end())
        arr2.erase(arr2.find(spellname));
}

ASpell* SpellBook::createSpell(std::string const &spellname)
{
    ASpell* tmp = NULL;
	if (arr2.find(spellname) != arr2.end())
		tmp = arr2[spellname];
	return (tmp);
}
