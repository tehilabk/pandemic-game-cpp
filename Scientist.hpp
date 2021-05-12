#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <typeinfo>
#include "string"
#include <stdio.h>
using namespace std;

namespace pandemic{

class Scientist: public Player{
    private:
        int numOfCards;
    public:
        Scientist(Board &gameBoard, City currCity, int numOfCards);
        string role();
        Player& discover_cure(Color color);
};
}    