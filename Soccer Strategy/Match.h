#ifndef MATCH_H_INCLUDED
#define MATCH_H_INCLUDED

#include <iostream>
#include <string>
#include "Team.h"
#include "Football.h"

using namespace std;

class Match:public Football{
public:
    Team a,b;
    void details();
    void write_back();

    void instructions();
    void toss();
    void game(int);

    void result();
    Match();
};

#endif // MATCH_H_INCLUDED
