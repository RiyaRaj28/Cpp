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

void printSaddle(int row, int col, int mat[row][col])
{
    int minimumrow[row], maximumcol[col]; 
     for(int i=0; i<row; i++)
    {
        int minrow = mat[i][0]; 
        for(int j=0; j<col; j++)
        {
            if(mat[i][j]<minrow)
            {
                minrow = mat[i][j]; 
            }
            // printf("%d ", mat[i][j]); 
        }
        // printf("%d", minrow);
        minimumrow[i] = minrow; 
        // printf("\n"); 
    }

    for(int j=0; j<col; j++)
    {
        int maxcol = mat[0][j];
        for(int i=0; i<row; i++)
        {
            if(mat[i][j]>maxcol)
            {
                maxcol = mat[i][j];
            }
        }
    // printf("%d ", maxcol); 
    maximumcol[j] = maxcol; 
    }

    printf("\nSaddle point:\n"); 
    int isSaddle = 0; 

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(minimumrow[i] == maximumcol[j]) 
            {
                printf("%d, [%d,%d]", mat[i][j], i,j);
                isSaddle = 1; 
            }
        }
    }

    if(isSaddle==0)
    {
        printf("No saddle point exists!"); 
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
    printSaddle(row, col, matrix);

    return 0; 

}