#include <stdio.h>

int maximum(int arr[50], int n)
{
    if(n==0)
    {
        return 0; 
    }

    int max = maximum(arr, n-1);

    return arr[n]> max ? arr[n] : max; 

}

int main()
{
    int arr[] = {1,2,3,5,6,2,56,7,89,99}; 
    
    int result =  maximum(arr, 10); 

    printf("Largest number is : %d", result);

    return 0; 
    
}