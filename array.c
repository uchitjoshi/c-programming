// p to do 4 xx 4 matrix uding funtion and add it 


#include<stdio.h>
#define SIZE 4
    // function to input the matrix elemets 

void inputMatrix(int matirx[SIZE][SIZE], const char*name){
    printf("Enter Elemets for %s matrix: \n", name);
    for (int i=0; i < SIZE; i++){
        for (int j =0; j < SIZE; j++){
            printf("%s[%d][%d]: ",name, i,j);
            scanf("%d",&matirx[i][j]);
        }
    }

}

// function to add the two matrices 
void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]){
    for (int i =0; i< SIZE; i++){
        for(int j=0; j < SIZE; j++){
            result[i][j] =A[i][j] +B[i][j];
        }
    }
}


//function to dispaly the matix 
void displayMatrix(int matrix[SIZE][SIZE], const char*name){
    printf("\n %s matrix: \n",name);
    for(int i=0; i< SIZE; i++){
        for(int j=0; j < SIZE; j++){
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}


// main function 
int main (){

    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int sum[SIZE][SIZE];


    inputMatrix(matrix1, "MAtrix1");
    inputMatrix(matrix2, "Matrix2");

    addMatrix(matrix1, matrix2, sum );

    displayMatrix(matrix1, "Matrix1");
    displayMatrix(matrix2, "Matrix2");
    displayMatrix(sum, "Sum");

    return 0;
    
}