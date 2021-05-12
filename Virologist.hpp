#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <typeinfo>
#include "string"
#include <stdio.h>
using namespace std;

namespace pandemic{

class Virologist: public Player{
    public:
        Virologist(Board &gameBoard, City currCity):Player(gameBoard, currCity){}
        string role();
        Player& treat(City city);
};
}        