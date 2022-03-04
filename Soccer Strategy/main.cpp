#include <iostream>
#include <graphics.h>
#include "Match.h"
using namespace std;

int main()
{
        int gd=DETECT;
        int gm;
        initgraph(&gd,&gm,"");
        Match m;
        Team a,b;
        m.instructions();
        Football f;
        f.ground(a,b);
    cout << "Hello world!" << endl;
    getch();
    closegraph();
    return 0;
}
