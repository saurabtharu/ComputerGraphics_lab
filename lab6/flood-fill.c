
// WAP to illustrate the flood fill algorithm



#include<stdio.h>
#include<graphics.h>

void floodFill(int x, int y, int FC, int OC){
        
    if(getpixel(x,y) == OC) {
            delay(5);
            putpixel(x,y,FC);
            floodFill(x+1,y,FC,OC);
            // delay(5);
            floodFill(x+1,y+1, FC, OC);
            // delay(5);
            floodFill(x,y+1,FC,OC);
            // delay(5);
            floodFill(x,y-1,FC,OC);
            // delay(5);
            floodFill(x-1,y+1,FC,OC);
            // delay(5);
            floodFill(x-1,y,FC,OC);
            // delay(5);
            floodFill(x-1,y-1,FC,OC);
            // delay(5);                                      
                                          }

}


int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
    setcolor(RED);
    rectangle(50,50,100,100);
    floodFill(55,55,9,0);
    getch();
    closegraph();
    return 0;
}
