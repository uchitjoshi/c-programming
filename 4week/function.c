//fucntion 
/*
    defination prototype, placeholder, fucntion overloading, formal pararmeter, actual parameter 

    call by value and call by refrecnce 
    


*/
#include<stdio.h>
int add(int a, int b);
int main(){

    int num1,num2,sum;
    printf("Enter two numebr");
    scanf("%d %d ", &num1,&num2);

    sum=add(num1,num2);

    printf("The sum is %d",sum);
    return 0;
}
int add(int a , int b){
    return a + b;

}