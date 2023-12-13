#pragma once

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator
{

private:
    TargetGenerator(TargetGenerator const &copy);
    TargetGenerator &operator=(TargetGenerator const &copy);

    std::map<std::string, ATarget *> maptarget;

public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

};