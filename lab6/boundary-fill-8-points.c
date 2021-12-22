
// WAP to illustrate the boundary fill algorithm

    // four points connected

#include<stdio.h>
#include<graphics.h>

void boundaryFill(int x, int y, int BC, int FC){
    
    
    int value = getpixel(x,y);
    if(value != BC && value != FC) {
            delay(5);
            putpixel(x,y,FC);
            boundaryFill(x-1,y,BC,FC);
            // delay(5);
            boundaryFill(x+1,y, BC, FC);
            // delay(5);
            boundaryFill(x,y-1,BC,FC);
            // delay(5);
            boundaryFill(x,y+1,BC,FC);
            // delay(5);
            boundaryFill(x-1,y-1,BC,FC);
            // delay(5);
            boundaryFill(x-1,y+1,BC,FC);
            // delay(5);
            boundaryFill(x+1,y-1,BC,FC);
            // delay(5);       
            boundaryFill(x+1,y+1,BC,FC);
            // delay(5);                                    
    }

}


int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
    setcolor(RED);
    rectangle(50,50,100,100);
    boundaryFill(55,55,RED,BLUE);
    getch();
    closegraph();
    return 0;
}
