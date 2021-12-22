// WAP to set the color of line  


#include<graphics.h>
#include<stdio.h>

int main(){
        int gd=DETECT,gm;

        initgraph(&gd,&gm,NULL);
        setcolor(RED);
        line(100,100,300,300);
        getchar();
        closegraph();

}
