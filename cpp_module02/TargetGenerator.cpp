#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}


void TargetGenerator::learnTargetType(ATarget* atarget)
{
    if (atarget)
        maptarget[atarget->getType()] = atarget->clone();
}

void TargetGenerator::forgetTargetType(std::string const &spellname)
{
    if (maptarget.find(spellname) != maptarget.end())
        maptarget.erase(maptarget.find(spellname));
}

ATarget* TargetGenerator::createTarget(std::string const &spellname)
{
    ATarget* tmp = NULL;
	if (maptarget.find(spellname) != maptarget.end())
		tmp = maptarget[spellname];
	return (tmp);
}
