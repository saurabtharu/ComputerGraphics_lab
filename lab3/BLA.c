// WAP to illustrate the breshenham's algorithm

#include<stdio.h>
#include<graphics.h>
#include<math.h>

void BresenhamLinePositiveSlope(int x1,int y1,int x2,int y2) {
        int x0,y0;
        int dx,dy;
        int p0;
        
        int gd=DETECT,gm;
        initgraph(&gd,&gm,NULL);

	    printf("\n\n\n\n\n\n");

        printf(" k      Pk     (xk,yk)\n");
        x0 = x1;
        y0 = y1;
        
        dx = abs(x2-x1);   
        dy = abs(y2-y1);
       
       
        if(dy<dx) 
            p0= 2*dy - dx;
        else 
            p0 = 2*dx - dy;

		int i = 0;
		do {
			printf("%d         %d", i, p0);
			if (p0 >= 0) {
				x0 = x0 + 1;
				y0 = y0 + 1;
				putpixel(x0, y0, GREEN);
				if (dy < dx)
					p0 = p0 + 2 * dy - 2 * dx;
				else
					p0 = p0 + 2 * dx - 2 * dy;
			} else {
					
				if (dy < dx)
				{
					x0 = x0 + 1;
					y0 = y0;
					p0 = p0 + 2 * dy;
				}
				else
				{
					x0 = x0;
					y0 = y0 + 1;
					p0 = p0 + 2 * dx;
				}
				putpixel(x0, y0, GREEN);

			}
			printf("     (%d,%d)\n", x0, y0);
			delay(50);
			i++;

		} while (x0 != x2 && y0 != y2);

		getch();
        closegraph();
}


void BresenhamLineNegativeSlope(int x1,int y1,int x2,int y2) {
        int x0,y0;
        int dx,dy;
        int p0;
        
        int gd=DETECT,gm;
        initgraph(&gd,&gm,NULL);

    	printf("\n\n\n\n\n\n");
        printf(" k      Pk     (xk,yk)\n");

    	x0 = x1;
    	y0 = y1;
        
        dx = abs(x2-x1);   
        dy = abs(y2-y1);
       
       
        if(dy<dx) 
            p0= 2*dy - dx;
        else 
            p0 = 2*dx - dy;

		int i = 0;
		do {
			printf("%d         %d", i, p0);
            if(p0 >= 0) {
                    x0 = x0 - 1;
                    y0 = y0 + 1;
                    putpixel(x0, y0, GREEN);

                    if(dy<dx)
                        p0 = p0 + 2 * dy - 2 * dx;
                    else
                        p0 = p0 + 2 * dx - 2 * dy;
            }
            else {
                if(dy<dx) {
                    x0 = x0 - 1;
                    y0 = y0 ;
                    p0 = p0 + 2*dy;
                }
                else {
                        x0=x0;
                        y0=y0+1;
                        p0 = p0 + 2*dx;
                }
                putpixel(x0, y0, GREEN);
            }
		printf("     (%d,%d)\n", x0, y0);


        delay(50);
		i++;

		} while (x0 != x2 && y0 != y2);

		getch();
        closegraph();
}



int main() {
        

    int x1,y1,x2,y2;
    printf("Enter the coordinates of first end point: ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the coordinates of another end point: ");
    scanf("%d %d",&x2,&y2);

	float slopeOfLine = (float)(y2 - y1) / (x2 - x1);
	printf("The slope of line is: %f\n", slopeOfLine);


	if(slopeOfLine >=0 ) {
		printf("Positive slope");
		BresenhamLinePositiveSlope(x1, y1, x2, y2);
	}
	else {
		printf("Negative slope");
        BresenhamLineNegativeSlope(x1, y1, x2, y2);
	}

    return 0;
}
