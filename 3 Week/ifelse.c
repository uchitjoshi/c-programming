#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two integers");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("%d is greater than %d \n ", x,y);
    }else{
        printf("%d is greater than %d \n",y,x);

    }
    return 0;
    
}