#include <stdio.h>
#include <math.h>

typedef struct polynomial
{
    int exp;
    int coeff;
}polynomial; 

int evaluatePoly(int n, int x, polynomial poly[100])
{
    int sum = 0; 
    for(int i=0; i<n; i++)
    {
        sum += poly[i].coeff * pow(x, poly[i].exp); 
    }

    return sum; 

}


int main(){
    polynomial poly[100];
    int n1, x, sum=0; 

    printf("Enter number of terms of polynomial 1:");
    scanf("%d", &n1);

    printf("Enter value of x: ");
    scanf("%d", &x); 


    printf("Now enter coefficient and exponents:\n");

    for(int i=0; i<n1; i++){
        printf("Coefficient:");
        scanf("%d", &poly[i].coeff);

        printf("Exponent:");
        scanf("%d", &poly[i].exp); 

        sum += poly[i].coeff * pow(x, poly[i].exp); 
    }
    printf("\n");

    printf("Polynomial 1:");
    for(int i=0; i<n1; i++){
        printf("%dx^[%d]",poly[i].coeff, poly[i].exp);
        if (i<n1-1){
            printf(" + ");
        }
    }

    printf("\n"); 

    printf("Sum is %d\n", sum); 
    int sumpoly = evaluatePoly(n1, x, poly); 
    printf("%d", sumpoly); 



    return 0;
} 