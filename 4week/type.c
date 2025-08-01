/*
 Type of fucntion in c 


    function with no argumetns and no return tpypes
    finction with argumet and return types

*/

#include <stdio.h>
void add(int a, int b);

int main(){
    int a,b;
    printf("Entee number 1:");
    scanf("%d",&a);

    printf("Enter number 2:");
    scanf("%d",&b);
    add(a,b);
    return 0;
}

    void add(int a, int b){
        int sum;
        sum =a+b;
        printf("Sum is %d \n",sum);
    }