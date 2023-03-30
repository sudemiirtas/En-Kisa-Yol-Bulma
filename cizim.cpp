#include <graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   
    setcolor(BLUE);
    setlinestyle(0,0,3);

    line(90,70,60,330);
    line(90,70,205,185);
    line(60,330,205,185);
    line(60,330,350,265);
    line(60,330,230,425);
    line(205,185,550,190);
    line(205,185,350,265);
    line(230,425,350,265);
    line(230,425,540,385);
    line(350,265,550,190);
    line(350,265,540,385);
    line(550,190,540,385);
 
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(90,70,20);
    floodfill(90, 70, GREEN);


    setcolor(GREEN);
    circle(60,330,20);
    floodfill(60, 330, GREEN);


    setcolor(GREEN);
    circle(205,185,20);
    floodfill(205, 185, GREEN);


    setcolor(GREEN);
    circle(230,425,20);
    floodfill(230, 425, GREEN);


    setcolor(GREEN);
    circle(350,265,20);
    floodfill(350, 265, GREEN);


    setcolor(GREEN);
    circle(540,385,20);
    floodfill(540, 385, GREEN);


    setcolor(GREEN);
    circle(550,190,20);
    floodfill(550, 190, GREEN);
 

    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(82, 60 , "Z");
    outtextxy(197, 175 , "Y");
    outtextxy(52, 320 , "X");
    outtextxy(342, 255 , "V");
    outtextxy(220, 415 , "W");
    outtextxy(532, 375 , "U");
    outtextxy(542, 180 , "T");

	outtextxy(265, 330 , "4");
    outtextxy(283, 204 , "8");
    outtextxy(380, 415 , "3");
    outtextxy(210, 270 , "3");
    outtextxy(125, 375 , "6");
    outtextxy(155, 110 , "12");
    outtextxy(125, 230 , "6");
    outtextxy(55, 200 , "8");
    outtextxy(360, 165 , "7");
    outtextxy(450, 235 , "4");
    outtextxy(410, 320 , "3");
    outtextxy(560, 270 , "2");



   getch();
   closegraph();
   return 0;
}
