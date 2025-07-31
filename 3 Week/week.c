#include <stdio.h>
#include <stdbool.h>

int main (){
    bool isProgrammingFun= true;
    bool isFishTasty=false;

    printf("%d | True \n",isProgrammingFun);
    printf("%d | Flase \n",isFishTasty);


    int myAge=25;
    int votingAge=18;
    if(myAge>=votingAge) {
        printf("Can vote ");
    }
    else{
        printf("No vote");
    }

}