#include "OperationsExpert.hpp"
#include "string"
#include <typeinfo>
#include <iostream>

using namespace std;
using namespace pandemic;

namespace pandemic
{

    string OperationsExpert::role()
    {
       return my_role;
    }

    Player &OperationsExpert::build()
    {
        build_research(this->gameBoard,currCity);
        return *this;
    }

}
