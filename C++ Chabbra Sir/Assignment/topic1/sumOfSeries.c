#include <stdio.h> 

int power(int n, int x)
{
    int product = 1; 
    for(int i=1; i<=n; i++) 
    {
        product = product * x;  
    }

    return product; 
}

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1; 
    }
    else{
        return n*factorial(n-1); 
    }
}



    int main(){
    int n, x;
    printf("Enter number of terms: ");
    scanf("%d", &n); 

    printf("Enter value of x: ");
    scanf("%d", &x); 

    float sum=0; 
    int sign = 1; 
    int N = 2*n -1; 

    for(int i=1; i<=N; i+=2)
    {
        sum += sign * (power(x,i) / factorial(i)); 
        sign *= -1; 
    }

    printf("\n Sum is %.2f", sum); 

    return 0; 
}

// #include <stdio.h>

// int power(int base, int exponent) {
//     int result = 1;
//     for (int i = 0; i < exponent; i++) {
//         result *= base;
//     }
//     return result;
// }

// int factorial(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int x, N;
//     float sum = 0;
//     int sign = 1;

//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     printf("Enter the value of N (must be odd): ");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i += 2) {
//         sum += sign * (float)power(x, i) / factorial(i);
//         sign *= -1;
//     }

//     printf("Sum of the series is: %.2f\n", sum);

//     return 0;
// }
