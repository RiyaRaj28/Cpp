#include <stdio.h>

int factorial(int n)
{
    int result; 
    if(n==0 || n==1)
    {
        result = 1; 
    }
    else
    {
        result = n * factorial(n-1);
    }

    return result; 

}

int main()
{
    int n; 
    printf("Enter number to find its factorial : ");
    scanf("%d", &n);

    int fact = factorial(n);

    printf("Factorial is : %d", fact); 

    return 0; 
    
}