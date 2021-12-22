// WAP to illustrate the transformation 
// 50 50 350 50 150 300
// 150 80 340 100 240 300
// 350 100 250 150 340 400
// 350 50 240 60 300 100
// 150 80 340 100 240 200
//310 80 550 100 400 200
// 590 200 450 100 500 300 
// 150 80  19 200 90 100

#include<stdio.h>
#include<graphics.h>

#define X 300
#define Y 250
void drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3) {

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void Xaxis(int x1,int y1,int x2,int y2,int x3,int y3){

    int nx1, ny1, nx2, ny2, nx3, ny3;
    nx1 = x1 ;
    ny1 = Y+ (Y-y1) ;
    nx2 = x2 ;
    ny2 = Y+ (Y-y2) ;
    nx3 = x3 ;
    ny3 = Y+ (Y-y3) ;

    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}

void Yaxis(int x1,int y1,int x2,int y2,int x3,int y3) {

    int nx1, ny1, nx2, ny2, nx3, ny3;
    nx1 = X + (X -x1) ;
    ny1 = y1 ;
    nx2 = X + (X -x2) ;
    ny2 = y2 ;
    nx3 = X + (X -x3) ;
    ny3 = y3 ;

    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}

void Origin(int x1,int y1,int x2,int y2,int x3,int y3) {


    int nx1, ny1, nx2, ny2, nx3, ny3;
    nx1 = X + (X - x1) ;
    ny1 = Y + (Y - y1) ;
    nx2 = X + (X - x2) ;
    ny2 = Y + (Y - y2) ;
    nx3 = X + (X - x3) ;
    ny3 = Y + (Y - y3) ;

    drawTriangle(nx1, ny1, nx2, ny2, nx3, ny3);
}



int main(){

    int x1, y1, x2, y2, x3, y3;

	int choice;

	printf("Enter the coordinates of each end point of traingle\n");

	printf("(x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf(" (x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("(x3,y3) : ");
    scanf("%d %d", &x3, &y3);

	printf("Reflection about\n\
	1. X-axis\n\
	2. Y-axis\n\
	3. Origin\n\
	4. Exit\n");
	printf("Enter the option: ");
	scanf("%d", &choice);

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	line(X, 0, X, 500);			//  x axis				x = 100 x = 300
	
	line(0, Y, 650, Y);			// y axis				y = 250 y = 250

	drawTriangle(x1, y1, x2, y2, x3, y3);

	switch(choice) {
		case 1:
		    Xaxis(x1, y1, x2, y2, x3, y3);
			break;
		case 2:
			Yaxis(x1, y1, x2, y2, x3, y3);
			break;
		case 3:
			Origin(x1, y1, x2, y2, x3, y3);
			break;
		case 4:
			printf("Exiting program!!!");
			exit(0);
		default:
			printf("Invalid choice!!!");
			break;
	}
    getch();
    closegraph();
}
