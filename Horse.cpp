#include "Horse.h"

using namespace std;

Horse::Horse(int horseId)
{
    id = horseId;
    position = 0;
}

void Horse::advance()
{
    position++;
}

void Horse::printLane() const
{
    cout << id << ": ";

    for (int i = 0; i < 15; i++)
    {
        if (i == position)
            cout << "H";
        else
            cout << ".";
    }

    cout << endl;
}

bool Horse::isWinner() const
{
    return position >= 15;
}

int Horse::getId() const
{
    return id;
}

int Horse::getNumHorses()
{
    return NUM_HORSES;
}
