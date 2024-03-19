#include <stdio.h>

typedef struct terms
{
    int row, col, val;
}term;

int add(term sparse1[101], term sparse2[101])
{
    term sum[101];
    int i=1, j=1, k=1; 

    while(i<=sparse1[0].val && j<=sparse2[0].val){
    if(sparse1[i].row < sparse2[j].row)
    {
        sum[k] = sparse1[i];
        i++, k++; 
    }

    else if(sparse1[i].row > sparse2[j].row)
    {
        sum[k] = sparse2[j];
        j++, k++; 
    }

    else
    {
        if(sparse1[i].col<sparse2[j].col)
        {
            sum[k] = sparse1[i];
            i++, k++;
        }

        else if(sparse1[i].col>sparse2[j].col)
        {
            sum[k] = sparse2[j];
            j++, k++;
        }

        else{
            sum[k].row = sparse1[i].row; 
            sum[k].col = sparse1[i].col;
            sum[k].val = sparse1[i].val + sparse2[j].val; 
            i++, j++, k++; 
        }
    }

    }

    sum[0].row = sparse1[0].row;
    sum[0].col = sparse1[0].col;
    sum[0].val = k-1; 

    printf("Sum Matrix :\n"); 

    for(int i=1; i<k; i++)
    {
        printf("%d   %d   %d\n", sum[i].row, sum[i].col, sum[i].val); 
    }

}

int main()
{
    term sparse1[101], sparse2[101], sparseSum[101];

    //take sparse matrix input 

    printf("Enter number of non-zero values in sparse matrix 1:");
    scanf("%d", &sparse1[0].val);

    printf("Enter nummber of row of sparse matrix:");
    scanf("%d", &sparse1[0].row);

    printf("Enter nummber of columns of sparse matrix:");
    scanf("%d", &sparse1[0].col); 

    for(int i=1; i<=sparse1[0].val; i++) 
    {
        printf("Enter row number:");
        scanf("%d", &sparse1[i].row);

        printf("Enter column number:");
        scanf("%d", &sparse1[i].col);

        printf("Enter value:");
        scanf("%d", &sparse1[i].val);

    }


    printf("Enter number of non-zero values in sparse matrix 2:");
    scanf("%d", &sparse2[0].val);

    printf("Enter nummber of row of sparse matrix:");
    scanf("%d", &sparse2[0].row);

    printf("Enter nummber of columns of sparse matrix:");
    scanf("%d", &sparse2[0].col); 

    for(int i=1; i<=sparse2[0].val; i++) 
    {
        printf("Enter row number:");
        scanf("%d", &sparse2[i].row);

        printf("Enter column number:");
        scanf("%d", &sparse2[i].col);

        printf("Enter value:");
        scanf("%d", &sparse2[i].val);

    }


    printf("Sparse Matrix 1:\n"); 

    for(int i=0; i<=sparse1[0].val; i++)
    {
        printf("%d   %d   %d\n", sparse1[i].row, sparse1[i].col, sparse1[i].val); 
    }

    printf("Sparse Matrix 2:\n"); 

    for(int i=0; i<=sparse2[0].val; i++)
    {
        printf("%d   %d   %d\n", sparse2[i].row, sparse2[i].col, sparse2[i].val); 
    }

   add(sparse1, sparse2); 

    return 0;
}