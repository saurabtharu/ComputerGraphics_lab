// WAP to illustrate the transformation 
// 50 50 350 50 150 300
// 150 80 340 100 240 300
// 350 100 250 150 340 400
// 100 100 300 100 200 150

#include<stdio.h>
#include<graphics.h>

void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3) {

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void scaling(int x1,int y1,int x2,int y2,int x3,int y3,float sx,float sy) {

    float nx1, ny1, nx2, ny2, nx3, ny3;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
Original points\n\
    (x1,y1) = (%d,%d)\n\
    (x2,y2) = (%d,%d)\n\
    (x3,y3) = (%d,%d)\n",x1, y1, x2, y2, x3, y3);

    printf("\nScaling factor\n\
    (sx, sy) = (%.2f,%.2f)\n",sx, sy);

    drawTriangle(x1, y1, x2, y2, x3, y3);

    nx1 = x1*sx;
    ny1 = y1*sy;
    nx2 = x2*sx;
    ny2 = y2*sy;
    nx3 = x3*sx;
    ny3 = y3*sy;

    printf("\n\nScaled points\n\
    (nx1,ny1) = (%.2f,%.2f)\n\
    (nx2,ny2) = (%.2f,%.2f)\n\
    (nx3,ny3) = (%.2f,%.2f)\n",nx1, ny1, nx2, ny2, nx3, ny3);
    
    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}


int main(){

    int x1, y1, x2, y2, x3, y3;
    float sx, sy;

    int gd = DETECT, gm;

    printf("Enter the coordinates of each end point of traingle\n ");
    printf("(x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("(x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("(x3,y3) : ");
    scanf("%d %d", &x3, &y3);
    printf("Enter the scaling factor (sx,sy): ");
    scanf("%f %f", &sx, &sy);

    initgraph(&gd, &gm, NULL);

    scaling(x1, y1, x2, y2, x3, y3,sx,sy);
    getch();
    closegraph();

}
