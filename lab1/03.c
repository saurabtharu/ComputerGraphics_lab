#include<stdio.h>
#include<graphics.h>

int main(){
        
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int color;
    putpixel(150,150,BLUE);
    color=getpixel(150,150);
    printf("The color of pixel is: %d",color);
    getch();
    closegraph();
}
