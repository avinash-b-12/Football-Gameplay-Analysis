#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
using namespace std;

class Player{
public:
    int number;
    bool hasBall;
    int x,y;
    string pos;
    Player();
    void setDefaults(Player);
};

#endif // PLAYER_H_INCLUDED
