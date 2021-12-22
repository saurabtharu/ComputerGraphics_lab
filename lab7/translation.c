// WAP to illustrate the transformation 
// 50 50 350 50 150 300
// 150 80 340 100 240 300
// 350 100 250 150 340 400


#include<stdio.h>
#include<graphics.h>

void drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3) {

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void tranformation(int x1,int y1,int x2,int y2,int x3,int y3,int xt,int yt) {

    int nx1, ny1, nx2, ny2, nx3, ny3;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
Original points\n\
    (x1,y1) = (%d,%d)\n\
    (x2,y2) = (%d,%d)\n\
    (x3,y3) = (%d,%d)\n",x1, y1, x2, y2, x3, y3);

    printf("\nTranslation factor\n\
    (xt, yt) = (%d,%d)\n",xt, yt);

    drawTriangle(x1, y1, x2, y2, x3, y3);

    nx1 = x1 + xt;
    ny1 = y1 + yt;
    nx2 = x2 + xt;
    ny2 = y2 + yt;
    nx3 = x3 + xt;
    ny3 = y3 + yt;


    printf("\n\nTranslated points\n\
    (nx1,ny1) = (%d,%d)\n\
    (nx2,ny2) = (%d,%d)\n\
    (nx3,ny3) = (%d,%d)\n",nx1, ny1, nx2, ny2, nx3, ny3);
    
    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}


int main(){

    int x1, y1, x2, y2, x3, y3;
    int xt, yt;

    int gd = DETECT, gm;

    printf("Enter the coordinates of each end point of traingle\n");

    printf("(x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("(x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("(x3,y3) : ");
    scanf("%d %d", &x3, &y3);

    printf("Enter the translation factor (xt,yt): ");
    scanf("%d %d", &xt, &yt);

    initgraph(&gd, &gm, NULL);


    tranformation(x1, y1, x2, y2, x3, y3,xt,yt);
    getch();
    closegraph();

}
