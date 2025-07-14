#include <stdio.h>
#define PI 3.14159 // defing a macro for PI 

int main(){
    float r, areaofCricle,areaofSquare;
    printf("Enter the Radius ");
    scanf("%f",&r);
    areaofCricle= PI * r * r;
    areaofSquare= r*r;

    printf("Area of Circle : %.2f\n", areaofCricle);
    printf("Area of Square: %f\n",areaofSquare );
    return 0;


    
}