// go to statemnt 
//error handing 
#include<stdio.h>
int main (){
    int num;
    printf("Enter a postive number");
    scanf("%d",&num);

    if (num <=0){
        goto error;
    }
    printf("You entered %d\n",num);
    return 0;

error:
    printf("Error : number must be postive ");
return 0;

}