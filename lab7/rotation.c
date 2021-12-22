


// 50 50 350 50 150 300
// 150 80 340 100 240 300
// 350 100 250 150 340 350
// .//./
// 600 100 450 200 500 200

#include<stdio.h>
#include<graphics.h>
#include<math.h>

void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3) {

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void rotation(float x1,float y1,float x2,float y2,float x3,float y3,float A) {

    float nx1, ny1, nx2, ny2, nx3, ny3;

    printf("\nAngle of rotation = %.2f\n",A);

    A = (A*3.1428)/180;

//     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
// Original points\n\
//     (x1,y1) = (%.2f,%.2f)\n\
//     (x2,y2) = (%.2f,%.2f)\n\
//     (x3,y3) = (%.2f,%.2f)\n",x1, y1, x2, y2, x3, y3);

    drawTriangle(x1, y1, x2, y2, x3, y3);

    nx1 = x1*cos(A) - y1*sin(A);
    ny1 = x1*sin(A) + y1*cos(A);
    nx2 = x2*cos(A) - y2*sin(A);
    ny2 = x2*sin(A) + y2*cos(A);
    nx3 = x3*cos(A) - y3*sin(A);
    ny3 = x3*sin(A) + y3*cos(A);

	// printf("x       y		xr		yr	\n");
	// printf("%.2f	    %.2f		%.2f		%.2f	\n",x1,y1,nx1,ny1);
	// printf("%.2f	    %.2f		%.2f		%.2f	\n",x2,y2,nx2,ny2);
	// printf("%.2f	    %.2f		%.2f		%.2f	\n",x3,y3,nx3,ny3);

	// printf("\n\nRotated points\n\
    // (nx1,ny1) = (%.2f,%.2f)\n\
    // (nx2,ny2) = (%.2f,%.2f)\n\
    // (nx3,ny3) = (%.2f,%.2f)\n",nx1, ny1, nx2, ny2, nx3, ny3);
    
    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}


int main(){

    float x1, y1, x2, y2, x3, y3;
    float A;

    int gd = DETECT, gm;

    printf("Enter the coordinates of each end point of traingle\n ");

    printf("(x1,y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("(x2,y2) : ");
    scanf("%f %f", &x2, &y2);
    printf("(x3,y3) : ");
    scanf("%f %f", &x3, &y3);
    printf("Enter the angle of rotation: ");
    scanf("%f", &A);

    initgraph(&gd, &gm, NULL);

    rotation(x1, y1, x2, y2, x3, y3,A);
    getch();
    closegraph();

}




