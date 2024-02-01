#include <stdio.h>


typedef struct term
{
    int row, col, value; 
}term; 

int checkSparse(int row, int col, int arr[row][col])
{
    int count = 0; 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]==0)
            {
                count++; 
            }
        }
    }
    int result = 0; 

    if(count>((row*col)/2))
    {
        result = count;
        printf("Sparse Matrix");
    }
    else{
        result = 0;
        printf("Not a sparse matrix"); 
    }

    return result;  
}

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
        for(int j=0; j<col; j++)
        {
            printf("%d ", mat[i][j]); 
        }
        printf("\n"); 
    }


}



int main()
{
    int row, col; 
    printf("Enter rows of the matrix:");
    scanf("%d", &row);
    
    printf("Enter columns of the matrix:");
    scanf("%d", &col);

    int sparse[row][col]; 
    int transp[row][col]; 

    printf("Enter sparse matrix:\n");
    inputMatrix(row, col, sparse);

    printf("Entered matrix is:\n");
    printMatrix(row, col, sparse); 
  
    //check if entered matrix is sparse or npt
    int result = checkSparse(row, col, sparse); 
    int value = (row*col) - result; 
    printf("\n"); 
    printf("Number of non-zero values are : %d \n", value); 

    //structure representation of sparse matrix 
    term sparseA[50], transposeA[50]; 



    transposeA[0].row = col;
    transposeA[0].col = row;
    transposeA[0].value = value; 

    //fill the sparse structure from the sparse matrix 
    int k = 1; 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(sparse[i][j]!=0)
            {
                sparseA[k].row = i;
                sparseA[k].col = j; 
                sparseA[k].value = sparse[i][j];  
                k++; 
            }

            else
            {
                continue; 
            }
        }
    }

    //print the sparse structure
    printf("Sparse Structure is : \n");

    sparseA[0].row = row; 
    sparseA[0].col = col; 
    sparseA[0].value = value; 

    printf("Row Col Value\n");
    for(int i=1; i<=value; i++)
    {
        printf("%d    %d    %d\n", sparseA[i].row, sparseA[i].col, sparseA[i].value); 
    }

    // int trow = col;
    // int tcol = row; 

    // //fill the transpose structure from the sparse struct
    // for(int i=1; i<value; i++)
    // {
    //     transposeA[i].row = sparseA[i].col;
    //     transposeA[i].col = sparseA[i].row;
    //     transposeA[i].value = sparseA[i].value;
    // }

    // //print the transpose struct 
    // printf("Transpose Structure is:");
    // printf("Row Col Value");
    // for(int i=0; i<value; i++)
    // {
    //     printf("%d  %d  %d", transposeA[i].row, transposeA[i].col, transposeA[i].value);  
    // }


    //initialise all elements in rowterms array as 0
    int rowterms[sparseA[0].col], startingindex[sparseA[0].col];
    for(int i=0; i<sparseA[0].col; i++)
    {
        rowterms[i] = 0; 
    }

    int col_num; 

    //count the rowterms of each row and feed in the rowterms array 
    for(int i=0; i<sparseA[0].col; i++)
    {
        col_num = sparseA[i].col;
        rowterms[col_num]++; 
    }

    //find out the starting index of each column, go to that column in the transpose struct and feed its value. This saves us from using two loops 
    startingindex[0] = 1;
    for(int i=0; i<sparseA[0].col; i++)
    {
        startingindex[i] = startingindex[i-1] + rowterms[i-1]; 
    }

    //feed it in the transpose struct 
    for(int i=1; i<sparseA[0].value; i++)
    {
        
    }



    
    



   return 0; 


}