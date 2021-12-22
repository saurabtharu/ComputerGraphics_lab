#include<graphics.h>
#include<stdio.h>

int main(){
        
    int gd = DETECT, gm;

    initgraph(&gd,&gm,NULL);
    getch();
    closegraph();

}
