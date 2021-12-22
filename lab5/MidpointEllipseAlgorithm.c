
// WAP to illustrate ellipse using Mid-point ellipse algorithm

#include<stdio.h>
#include<graphics.h>
#include<math.h>

void drawEllipse(int xc,int yc,int x, int y){

    putpixel(xc+x,yc-y,WHITE);
    delady(30);
    putpixel(xc-x,yc+y,WHITE);
    delay(30);
    putpixel(xc+x,yc+y,WHITE);
    delay(30);
    putpixel(xc-x,yc-y,WHITE);
    delay(30);
}

void ellipseDrawing(int xc, int yc,int Xrad,int Yrad) {
        int a,b;
        int x0,y0;
        a = Xrad;
        b = Yrad;

        int gd=DETECT, gm;
        initgraph(&gd,&gm,NULL);



        int P = (b*b)  - (a*a*b) + ((a*a)/4);
        x0 = 0;
        y0 = Yrad;

        while((2*x0*b*b) < (2*y0*a*a)) {
            
            drawEllipse(xc,yc,x0,y0);

            if( P < 0 ) {

                    x0 = x0 + 1;
                    y0 = y0 ;

                    P = P + 2*b*b*x0 + b*b;

            } else {
                    x0 = x0 + 1;
                    y0 = y0 - 1;

                    P = P + 2*b*b*x0 - 2*a*a*y0 + b*b;
            }
        } 


         P = b*b*((float)x0 + 0.5)*((float)x0 + 0.5) + a * a * (y0 - 1)*(y0 - 1) - a*a*b*b;
        
        while ( y0 >= 0) {
            
            drawEllipse(xc,yc,x0,y0);


            if( P > 0) {
                    x0 = x0;
                    y0 = y0 - 1;
                    
                    P = P - (2*a*a*y0) + a*a;
            } else {

                    x0 = x0 + 1;
                    y0 = y0 - 1;
                    
                    P = P + 2*b*b*x0 - 2*a*a*y0 - a*a;
            }

        }
        getch();
        closegraph();

}


int main() {
        int xc,yc,Xrad,Yrad;

       printf("Enter the co-ordinates of center of the ellipse: ");
       scanf("%d %d",&xc, &yc);

        printf("Enter the value of horizontal radius: ");
        scanf("%d",&Xrad);

        printf("Enter the value of vertical radius: ");
        scanf("%d",&Yrad);

        ellipseDrawing(xc,yc,Xrad,Yrad);
        return 0;
        

}
