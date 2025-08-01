/*
 function protyes 

 call by reference 
 pointer 
 dereference pointer 
store class in c 
register cariable 
static variable 
*/



#include<stdio.h>
void swap(int *, int *);

int main(){
    int a =40, b=50;

    printf("BEfore swap : a =%d, b = %d\n",a,b);
    swap(&a,&b);

    printf("after swpa : a=%d,b =%d\n", a, b);
}

void swap(int *a, int *b){

    int temo =*a;
    *a=*b;
    *b=temo;
    printf("Inide swpa function x =%d, y=%d\n", *a, *b);

}