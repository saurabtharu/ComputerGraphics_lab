#include<graphics.h>
#include<stdio.h>
#include<math.h>

void DDA(int x1,int y1,int x2,int y2){
	int steps,dx,dy;
	int gd=DETECT,gm;

	initgraph(&gd,&gm,NULL);
	dx = x2-x1;
	dy=  y2-y1;

	if(abs(dx)>abs(dy))
		steps =  abs(dx);
	else
		steps= abs(dy);

	int Xinc, Yinc;
	Xinc= dx/steps;
	Yinc = dy/steps;

	for(int i=0; i< steps; i++) {
		x1 = x1 + Xinc;
	    y1 = y1 + Yinc;
	    putpixel(x1,y1,GREEN);
	    delay(40);
	}
	setcolor(RED);
	getch();
	closegraph();
}
int main(){        
	int x1,x2,y1,y2;
	printf("Enter the first point: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter another point: ");
	scanf("%d %d",&x2,&y2);
	DDA(x1,y1,x2,y2);
}