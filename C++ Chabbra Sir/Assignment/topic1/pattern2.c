#include <stdio.h>

int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows); 

    //spaces
    for(int i=1; i<=rows; i++){

        for(int j=rows-i; j>=0; j--)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(int j=i-1; j>0; j--)
        {
            printf("%d", j); 
        }

        printf("\n");


    }

    return 0;
}