#include<graphics.h>
#include<stdio.h>

int main(){
        
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    putpixel(100,100,RED);
    getchar();
    closegraph();

}
