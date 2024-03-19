#include <stdio.h>

void inputMatrix(int row, int col, int mat[row][col]) 
{
        for(int i=0; i<row; i++)
        {
        for(int j=0; j<col; j++)
        {
            printf("Enter element at index [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]); 
        }
        printf("\n"); 
        }

}

void printMatrix(int row, int col, int mat[row][col])
{
     for(int i=0; i<row; i++)
    {
        int maxrow = mat[i][0]; 
        for(int j=0; j<col; j++)
        {
            if(mat[i][j]>maxrow)
            {
                maxrow = mat[i][j]; 
            }
            printf("%d ", mat[i][j]); 
        }
        printf("%d", maxrow);
        printf("\n"); 
    }

    for(int j=0; j<col; j++)
    {
        int mincol = mat[0][j];
        for(int i=0; i<row; i++)
        {
            if(mat[i][j]<mincol)
            {
                mincol = mat[i][j];
            }
        }
    printf("%d ", mincol); 
    }
}


int main()
{
    int row, col; 
    printf("Enter rows of the matrix:");
    scanf("%d", &row);
    
    printf("Enter columns of the matrix:");
    scanf("%d", &col);

    int matrix[row][col]; 
    inputMatrix(row, col, matrix);
    printMatrix(row, col, matrix);

    return 0; 

}