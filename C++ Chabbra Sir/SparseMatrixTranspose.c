#include <stdio.h>

typedef struct terms
{
    int row, col, val;
}term;

int main()
{
    term sparse[101], transp[101];

    //take sparse matrix input 

    printf("Enter number of non-zero values in sparse matrix:");
    scanf("%d", &sparse[0].val);

    printf("Enter nummber of row of sparse matrix:");
    scanf("%d", &sparse[0].row);

    printf("Enter nummber of columns of sparse matrix:");
    scanf("%d", &sparse[0].col); 

    for(int i=1; i<=sparse[0].val; i++) 
    {
        printf("Enter row number:");
        scanf("%d", &sparse[i].row);

        printf("Enter column number:");
        scanf("%d", &sparse[i].col);

        printf("Enter value:");
        scanf("%d", &sparse[i].val);

    }

    transp[0].row = sparse[0].col;
    transp[0].col = sparse[0].row;
    transp[0].val = sparse[0].val;

    for(int i=1; i<transp[0].val; i++)
    {
        transp[i].row = sparse[i].col;
        transp[i].col = sparse[i].row;
        transp[i].val = sparse[i].val; 
    }

    printf("Sparse Matrix:\n"); 

    for(int i=0; i<sparse[0].val; i++)
    {
        printf("%d   %d   %d\n", sparse[i].row, sparse[i].col, sparse[i].val); 
    }

    printf("\nTranspose Matrix:\n");

        for(int i=0; i<transp[0].val; i++)
    {
        printf("%d   %d   %d\n", transp[i].row, transp[i].col, transp[i].val);  
    }












}










 