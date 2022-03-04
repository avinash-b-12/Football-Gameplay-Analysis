#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player(){
    hasBall=false;
    x=0;
    y=0;
    pos="";
    number=0;
}
void Player::setDefaults(Player p){
    if(!p.pos.compare("GK")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("CB1")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("CB2")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("LB")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("RB")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("CM")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("CDM")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("CAM")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("RW")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("LW")){
        x=0;
        y=0;
    }
    else if(!p.pos.compare("ST")){
        x=0;
        y=0;
    }
}
