//insert into a sequence of sorted length i  an element such that the new sequence i+1 is also sorted!

#include <stdio.h>

void InsertionSort(int arr[50], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int j=i, newval = arr[i+1]; //have to insert arr[i+1] into the array
        while(j>=0 && arr[j]>newval) 
        {
            arr[j+1] = arr[j]; 
            j--;
        } 
        arr[j+1] = newval; 
    }

    
    for(int i=0; i<6; i++)
     {
        printf("%d ", arr[i]); 
     }

}

int main()
{

     int arr[6] = {12,8,5,17,21,4};
     InsertionSort(arr, 6);

     return 0;
}









