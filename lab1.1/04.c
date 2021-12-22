// WAP to set the color of line  


#include<graphics.h>
#include<stdio.h>

int main(){
        int gd=DETECT,gm;

        initgraph(&gd,&gm,NULL);
        setcolor(GREEN);
        rectangle(600,400,100,150);
        getchar();
        closegraph();

}
