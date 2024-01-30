
#include <stdio.h>
int sumCount(int n)
{
    int result; 
    if(n==1)
    {
        result = 1; 
    }
    else
    {
    result = n + sumCount(n-1);
    }

        return result;  


}

int main()
{
    int n; 
    printf("Enter number to count sum till: ");
    scanf("%d", &n);

    int sum = sumCount(n);

    printf("Sum is : %d", sum);

    return 0; 
    
}