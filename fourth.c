//WAP TO FIND THE AREA OF CIRCLE AND TAKE RADIUS FROM USER
#include<stdio.h>
int main()
{
    float r,area;
    printf("ENTER THE RADIUS OF THE CIRCLE");
    scanf("%f",&r);
    area=3.144*r*r;
    printf("Area of circle %f having radiuis of %.2f",area,r);
    return 0;
}