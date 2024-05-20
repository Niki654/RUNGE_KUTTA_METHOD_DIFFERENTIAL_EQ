#include<stdio.h>
#include<stdlib.h>
//float f=(float x,float y);
int main()
{
    float x0,y0,x1,y1,h,k1,k2,k3,k4,K;
    float O1,O2,O3,P1,P2,P3,O,P;
    printf("RUIGE KUTTA METHOD\n");
    printf("The expression : 2*x-y\n");
    printf("Enter the value x and y\n");
    scanf("%f\t%f",&x0,&y0);
    printf("\nEnter the value x1 .To find the value of y1");
    scanf("%f",&x1);
    h=x1-x0;
    printf("\nh:%f",h);
    k1=h*(2*x0-y0);
    O=2*x0;
    P=y0;
   printf("\nk1:f(%f,%f)\t",O,P);
    printf("k1:%f\n",k1);
    O1=(x0+h/2);
    P1=(y0+k1/2);
    k2=h*(2*O1-P1);
    printf("\nk2:f(%f,%f)\t",O1,P1);
    printf("k2:%f",k2);
    O2=(x0+h/2);
    P2=(y0+k2/2);
    printf("\nk3:f(%f,%f)\t",O2,P2);
    k3=h*(2*O2-P2);
    printf("k3:%f\n",k3);
    O3=(x0+h);
    P3=(y0+k3);
    printf("k4:f(%f,%f)\t",O3,P3);
    k4=h*(2*O3-P3);
    printf("k4:%f",k4);
    K=(k1+2*k2+2*k3+k4)/6;
    printf("\nThe average K:%f",K);
    y1=y0+K;
    printf("\ny1:%f",y1);

}/*
float f(x,y)
{

}
*/
