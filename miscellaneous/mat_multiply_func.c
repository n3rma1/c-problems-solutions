/*
matrix multiply using function

*/

#include <stdio.h>
#define row 3
#define col 3
int inputmatrix(int mat[][col]){
for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", (*(mat+i)+j));
        }
        
    }
}
int printmatrix(int mat[][col]){
for (int i = 0; i < row; i++)
    {
        for (int j  = 0; j < col; j++)
        {
            printf("%d ", (*(*(mat+i)+j)));

        }
        printf("\n");
        
    }
}
int multiply(int mat1[row][col], int mat2[][col],int result[][col]){
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           int sum = 0;
            (*(*(result+i)+j)) = 0;
            for (int k = 0; k < col; k++)
            {
                sum += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            }
            (*(*(result+i)+j))= sum;
        }
        
    }
}
int main()

{
    // int row,col,row1,col1,row2,col2;
    int mat1[row][col], mat2[row][col], product[row][col];
    // if(col!=row1){
    //     printf("matrix can't be multiplied.");
    //     return 1;
    // }
    printf("Enter data for matrix1: \n");
    inputmatrix(mat1);
    printf("Enter data for matrix 2: \n");
    inputmatrix(mat2);
    printf("matrix1 is: \n");
    printmatrix(mat1);
    printf("matrix 2 is: \n");
    printmatrix(mat2);
    printf("Multiplication is: \n");
    multiply(mat1,mat2,product);
    printf("Final result: \n");
    printmatrix(product);

}