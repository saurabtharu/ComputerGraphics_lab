// WAP  to illustrate the ellipse

#include<stdio.h>
#include<graphics.h>

int main() {
        
    int gd=DETECT,gm;
    int x,y,startAngle,endAngle,Xrad,Yrad;
    initgraph(&gd,&gm,NULL);
    x=200,y=200;                    //for center
    startAngle=0,endAngle=360;      // for starting angle  and ending angle
    Xrad=100,Yrad=80;               //for radius of X axis and Y axis
    
    setcolor(GREEN);
    ellipse(x,y,startAngle,endAngle,Xrad,Yrad);
    getch();
    closegraph();
    
}
