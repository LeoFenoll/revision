#pragma once
#include <string>

class Animal
{
protected:
    std::string m_couleur;
public:
    virtual void seDeplacer(void) = 0;
};
