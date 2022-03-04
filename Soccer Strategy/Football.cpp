#include <iostream>
#include <string>
#include <graphics.h>
#include "Football.h"
#include "Team.h"

Football::Football(){
    cout<<"A football ground"<<endl;
}

void Football::ground(Team a,Team b){
    rectangle(200,50,200+74*3.5,50+114*3.5);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(330,200,WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    circle(330,250,2);
    floodfill(330,250,WHITE);
    line(200,250,200+74*3.5,250);
    circle(330,250,25);

    line(300,50,300,40);
    line(300,40,360,40);
    line(360,40,360,50);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(330,45,WHITE);

    line(300,449,300,459);
    line(300,459,360,459);
    line(360,459,360,449);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(330,455,WHITE);

    line(280,50,280,75);
    line(280,75,380,75);
    line(380,75,380,50);

    line(240,50,240,101);
    line(240,101,420,101);
    line(420,101,420,50);

    arc(330,84,220,320,28);
    //putpixel(330,84,WHITE);
    circle(330,84,2);
    floodfill(330,84,WHITE);

    line(280,449,280,424);
    line(280,424,380,424);
    line(380,424,380,449);

    line(240,449,240,398);
    line(240,398,420,398);
    line(420,398,420,449);

    arc(330,415,40,140,28);
    //putpixel(330,415,WHITE);
    circle(330,415,2);
    floodfill(330,415,WHITE);

    arc(200,50,270,360,15);
    arc(200,449,0,90,15);
    arc(459,50,180,270,15);
    arc(459,449,90,180,15);
    //rectangle(100,100,174+74*2,214+114*2);
    Team A,B;
    setcolor(BLACK);
    /*A.player[0].x=7;
    A.player[0].y=15;
    A.player[1].x=67;
    A.player[1].y=15;
    A.player[2].x=47;
    A.player[2].y=20;
    A.player[3].x=27;
    A.player[3].y=20;
    A.player[4].x=10;
    A.player[4].y=45;
    A.player[5].x=37;
    A.player[5].y=52;
    A.player[6].x=64;
    A.player[6].y=50;
    A.player[7].x=37;
    A.player[7].y=100;
    A.player[8].x=4;
    A.player[8].y=85;
    A.player[9].x=67;
    A.player[9].y=90;
    A.player[10].x=37;
    A.player[10].y=2;
    */

    A.player[0].x=5;
    A.player[0].y=4;
    A.player[1].x=69;
    A.player[1].y=4;
    A.player[2].x=47;
    A.player[2].y=10;
    A.player[3].x=27;
    A.player[3].y=10;
    A.player[4].x=10;
    A.player[4].y=20;
    A.player[5].x=37;
    A.player[5].y=27;
    A.player[6].x=64;
    A.player[6].y=25;
    A.player[7].x=37;
    A.player[7].y=52;
    A.player[8].x=4;
    A.player[8].y=48;
    A.player[9].x=67;
    A.player[9].y=50;
    A.player[10].x=37;
    A.player[10].y=2;

    setfillstyle(SOLID_FILL,BLUE);
    int i,x,y;
    for(i=0;i<11;i++){
        x=200+A.player[i].x*3.5;
        y=50+A.player[i].y*3.5;
        circle(x,y,7);
        floodfill(x,y,BLACK);
        //outtextxy(x,y,"1");
    }
    /*B.player[0].x=7;
    B.player[0].y=99;
    B.player[1].x=67;
    B.player[1].y=99;
    B.player[2].x=47;
    B.player[2].y=94;
    B.player[3].x=27;
    B.player[3].y=94;
    B.player[4].x=10;
    B.player[4].y=69;
    B.player[5].x=37;
    B.player[5].y=62;
    B.player[6].x=64;
    B.player[6].y=64;
    B.player[7].x=37;
    B.player[7].y=14;
    B.player[8].x=4;
    B.player[8].y=29;
    B.player[9].x=67;
    B.player[9].y=24;
    B.player[10].x=37;
    B.player[10].y=112;
    */

    B.player[0].x=5;
    B.player[0].y=110;
    B.player[1].x=69;
    B.player[1].y=110;
    B.player[2].x=47;
    B.player[2].y=104;
    B.player[3].x=27;
    B.player[3].y=104;
    B.player[4].x=10;
    B.player[4].y=94;
    B.player[5].x=37;
    B.player[5].y=87;
    B.player[6].x=64;
    B.player[6].y=89;
    B.player[7].x=37;
    B.player[7].y=62;
    B.player[8].x=4;
    B.player[8].y=66;
    B.player[9].x=67;
    B.player[9].y=64;
    B.player[10].x=37;
    B.player[10].y=112;

    setfillstyle(SOLID_FILL,RED);
    for(i=0;i<11;i++){
        x=200+B.player[i].x*3.5;
        y=50+B.player[i].y*3.5;
        circle(x,y,7);
        floodfill(x,y,BLACK);
        //outtextxy(x,y,"1");
    }
    cout<<"Hello"<<endl;
}
