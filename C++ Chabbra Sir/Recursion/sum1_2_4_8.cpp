#include <stdio.h>
#include <math.h>

int powSum(int n)
{
    int result; 
    if(n==0)
    {
        result = 1; 
    }
    else
    {
    result = pow(2,n) + powSum(n-1);
    }

        return result;  


}

int main()
{
    int n; 
    printf("Enter power of 2 to sum till: ");
    scanf("%d", &n);

    int sum = powSum(n);

    printf("Sum is : %d", sum);

    return 0; 
    
}