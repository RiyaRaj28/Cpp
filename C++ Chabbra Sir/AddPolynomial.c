#include <stdio.h>

int main(){
    int deg1, deg2;

    printf("Enter degree of polynomial 1:");
    scanf("%d", &deg1);
    int poly1[deg1+1];
    for(int i=deg1; i>=0; i--){
        printf("Enter constant for x^[%d]:", i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of polynomial 2:");
    scanf("%d", &deg2);
    int poly2[deg2+1];
      for(int i=deg2; i>=0; i--){
        printf("Enter constant for x^[%d]:", i);
        scanf("%d", &poly2[i]);
    }

    int deg3 = deg1;
    if(deg2 < deg1){
        deg3 = deg2;
    }
    int poly3[deg3]; 

    for(int i=0; i<=deg3; i++){
        poly3[i] = poly1[i] + poly2[i];
    }

    int degree = deg1;
    if(deg2>deg1){
        degree = deg2;
    }

    for(int i= degree; i> degree-deg3+1; i--){
        if(deg1>deg2){
        printf("%dx^%d + ", poly1[i], i);
        
    }
    else{
        printf("%dx^%d +", poly2[i], i); 
    }
    }

    for(int i = deg3; i>=0; i--){
        printf("%dx^%d", poly3[i], i);
        if(i>0){
            printf(" + ");
        }
    }

  return 0;

}