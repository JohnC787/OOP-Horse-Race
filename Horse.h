#ifndef HORSE_H
#define HORSE_H

#include <iostream>

class Horse
{
private:
    int id;
    int position;

    static const int NUM_HORSES = 5;

public:
    Horse(int horseId);

    void advance();
    void printLane() const;
    bool isWinner() const;

    int getId() const;
    static int getNumHorses();
};

#endif
