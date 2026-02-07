# OOP-Horse-Race
## UML Diagram
```mermaid
classDiagram
class Horse{
    Private
    - ID: int
    - Position: int
    - NUM_HORSES: int, static and const
    Public()
    + Horse (int horseId)
    + void advance()
    + void printLane()
    + bool isWinner()
    + int getId()
    + static int getNumHorses()
    
    }

class Race{
    - Horse horses[NUM_HORSES]
    - random_device rd
    - uniform_int_distribution<int> dist
    + Race()
    + void run()
}
