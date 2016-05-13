#pragma once
#include "animal.h"

class Sanglier: public Animal
{
private:
    int m_longDef;
public:
    Sanglier();
    void seDeplacer(void);
};
