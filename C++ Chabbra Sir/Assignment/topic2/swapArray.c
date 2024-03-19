#include <stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5}; 
    int length = 5; 

    int temp; 

    for(int i=0; i<length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = temp; 
    }
    
    for(int i=0; i<length; i++){
    printf("%d ", arr[i]);
    }
}