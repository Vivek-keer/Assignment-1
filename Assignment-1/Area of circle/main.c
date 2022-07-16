//Program to find the area of the circle. Take radius of circle from user as input and print the result format – “Area of circle is A having the radius R”. Replace A with area & R with radius.


#include<stdio.h>

    int main()
{
    int r; float A;
    printf("Enter the Value of radius: ");
    scanf("%d",&r);
    A=3.142*r*r;
    printf("Area of circle is %f having radius %d ",A,r);
    return 0;
}
