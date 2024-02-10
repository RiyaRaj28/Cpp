#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void QuickSort(int arr[50], int start, int end)
{
    int pivot, i, j; 
    if(end-start >0)
    {
        pivot = arr[start];
        i = start, j = end+1; 
        do
        {
            do i++; 
              while(arr[i]<pivot);   //it will increase i until the arr[i] becomes greater than pivot. Then swap will occur 
            do j--; 
              while(arr[j]>pivot);


            if (i < j)
            swap(&arr[i], &arr[j]);
        }
        while(i<j); 

        swap(&arr[start], &arr[j]);

        QuickSort(arr, start, j-1);
        QuickSort(arr, j+1, end);

    }

}


int main()
{
     int arr[6] = {12,8,5,17,21,4};
     QuickSort(arr, 0, 5); 

    for(int i=0; i<6; i++)
    {
       printf("%d ", arr[i]); 
    }

     return 0;
}