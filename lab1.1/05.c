// WAP to illustrate a triangle using line  


#include<graphics.h>
#include<stdio.h>

int main(){
        int gd=DETECT,gm;

        initgraph(&gd,&gm,NULL);
        setcolor(BLUE);
        line(50,50,300,50);
        line(300,50,150,300);
        line(150,300,50,50);
        
        getchar();
        closegraph();

}
