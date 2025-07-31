#include <stdio.h>
int main (){
    char grade='E';
    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
    case 'C':
    printf("Your passed");
        break;
    case 'D':
    printf("You fail");
    break;
    
    default:
    printf("invlaid");
        break;
    }

    printf("\n You garde is %c\n",grade);
}