// WAP to illustrate the circle`  


#include<graphics.h>
#include<stdio.h>

int main(){
        int gd=DETECT,gm;

        initgraph(&gd,&gm,NULL);
        setcolor(RED);
        circle(300,200,100);
        getchar();
        closegraph();

}
