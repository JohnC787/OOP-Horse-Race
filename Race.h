#ifndef RACE_H
#define RACE_H

#include <random>
#include "Horse.h"

class Race
{
private:
    Horse horses[Horse::getNumHorses()];
    std::random_device rd;
    std::uniform_int_distribution<int> dist;

public:
    Race();
    void run();
};

#endif
