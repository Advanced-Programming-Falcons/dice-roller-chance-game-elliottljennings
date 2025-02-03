#include <cstdlib>
#include "dice.h"
die::die(int sides){
    this->sides = sides;
}

int die::roll(){
    this->num = rand() % sides +1;
    return this->num;
}