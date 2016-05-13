#pragma once
#include <string>

class Animal
{
protected:
    std::string m_couleur;
public:
    Animal();
    virtual void seDeplacer(void) = 0;
};
