#include <stdio.h>

typedef struct polynomial
{
    int exp;
    int coeff;
}polynomial; 

int inputpoly(polynomial poly, int n){
    printf("hello");
    return 0;
}

int main(){
    polynomial poly1[100], poly2[100], poly3[100];
    int n1, n2, n3; 

    printf("Enter number of terms of polynomial 1:");
    scanf("%d", &n1);

    printf("Now enter coefficient and exponents:\n");

    for(int i=0; i<n1; i++){
        printf("Coefficient:");
        scanf("%d", &poly1[i].coeff);
        // printf("\n"); 
        printf("Exponent:");
        scanf("%d", &poly1[i].exp); 
        // printf("\n"); 
    }
    printf("\n");

    printf("Enter number of terms of polynomial 2:");
    scanf("%d", &n2);

    for(int i=0; i<n2; i++){
        printf("Coefficient:");
        scanf("%d", &poly2[i].coeff);
        // printf("\n"); 
        printf("Exponent:");
        scanf("%d", &poly2[i].exp); 
        // printf("\n"); 
    }
    printf("\n");

    printf("Polynomial 1:");
    for(int i=0; i<n1; i++){
        printf("%dx^[%d]",poly1[i].coeff, poly1[i].exp);
        if (i<n1-1){
            printf(" + ");
        }
    }

    printf("\n"); 

    printf("Polynomial 2:");
    for(int i=0; i<n2; i++){
        printf("%dx^[%d]",poly2[i].coeff, poly2[i].exp); 
            if (i<n2-1)
            {
            printf(" + ");
        }
    }

    n3 = n1;
    if(n2>n1){
        n3 = n2;
    }

    for(int i = 0; i<n3; i++){
        if(n1>n2){
            poly3[i].exp = poly1[i].exp;
            
        }
    }
    return 0;
} 


