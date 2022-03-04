#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Team{
public:
    Player player[11];
    int goals;
    string teamName;
    Team();
};
#endif // TEAM_H_INCLUDED
