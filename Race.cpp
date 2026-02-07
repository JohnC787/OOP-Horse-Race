#include "Race.h"
#include <iostream>

using namespace std;

Race::Race() : dist(0, 1),
               horses{ Horse(0), Horse(1), Horse(2), Horse(3), Horse(4) }
{
}

void Race::run()
{
    bool raceOver = false;

    cout << "Horse Race (OOP Version)\n";
    cout << "Press ENTER to advance the race.\n\n";

    while (!raceOver)
    {
        cin.get();

        for (int i = 0; i < Horse::getNumHorses(); i++)
        {
            int coin = dist(rd);

            if (coin == 1)
                horses[i].advance();

            horses[i].printLane();

            if (horses[i].isWinner())
            {
                cout << "\nHorse " << horses[i].getId() << " wins!\n";
                raceOver = true;
            }
        }

        cout << endl;
    }
}
