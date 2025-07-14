// program to convert fahrenheit celsius


#include<stdio.h>
int main(){
    float f,c;
    printf("TO Convert fahrenheit into clesius\n");
    printf("Enter the value : ");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("the value of celsius  %.2f ",c);
    return 0;

}