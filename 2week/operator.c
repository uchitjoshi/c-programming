/* 
Ternary operatots 
    it is a condition 
    Relation operators 
    SWAP VALUES FOR THE SWAPING IN xor OPERATOR 


// find the largest amomng two /three values using ternary operator 

#include<stdio.h>
int main(){
    int a= 20, b=15,c=30, largest;

    largest=a>b ? a : b ; // ternary exoerssion part
    printf("Largets:%d",largest);

    
    return 0;
}*/

#include <stdio.h>
int main(){
    int num = 10;
    int ans;//

    ans=  num++;//++num;
    printf("value of ans:%d\n",ans);
    printf("value of ans:%d\n",num);
}